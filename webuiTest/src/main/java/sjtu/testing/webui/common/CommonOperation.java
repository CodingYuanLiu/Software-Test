package sjtu.testing.webui.common;

import lombok.extern.slf4j.Slf4j;
import net.sourceforge.tess4j.Tesseract;
import net.sourceforge.tess4j.TesseractException;
import org.openqa.selenium.*;
import org.openqa.selenium.internal.WrapsDriver;
import org.openqa.selenium.support.ui.ExpectedCondition;
import org.openqa.selenium.support.ui.WebDriverWait;

import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.logging.Logger;

@Slf4j
public class CommonOperation {
    private final static String loginUrl = "https://oc.sjtu.edu.cn/login/canvas";
    public static boolean debug = false;

    public static void login(WebDriver driver, String username, String password) {
        // Get zoom ratio of screen on Windows, the value would affect the cropped result
        double screenZoomRatio = Double.parseDouble(System.getProperty("SCREEN_ZOOM_RATIO"));
        WebDriverWait waitElement = new WebDriverWait(driver, 10);
        WebElement jaccountLinkElement, usernameInputElement, passwordInputElement,
                captchaImageElement, captchaInputElement;

        File screenshotFile;
        BufferedImage screenshotImage, captchaScreenshotImage;

        // rect is used to locate the captchaImageElement
        Rectangle rect;

        // tesseract is used to read captcha code from a given image
        Tesseract tesseract = new Tesseract();
        String captchaCode;
        boolean loginCompleted = false;

        driver.get(loginUrl);
        jaccountLinkElement =  waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("jaccount")));
        // Navigate to sso
        jaccountLinkElement.click();

        while (!loginCompleted) {
            usernameInputElement = waitElement.until(
                    (ExpectedCondition<WebElement>) d -> d.findElement(By.id("user")));
            passwordInputElement = driver.findElement(By.id("pass"));
            usernameInputElement.sendKeys(username);
            passwordInputElement.sendKeys(password);

            // Start read captcha code
            captchaImageElement = driver.findElement(By.id("captcha-img"));
            captchaInputElement = driver.findElement(By.id("captcha"));

            screenshotFile = ((TakesScreenshot)driver).getScreenshotAs(OutputType.FILE);
            rect = captchaImageElement.getRect();
            try {
                screenshotImage = ImageIO.read(screenshotFile);
                captchaScreenshotImage = screenshotImage.getSubimage(
                        (int) (rect.getX() * screenZoomRatio),
                        (int) (rect.getY() * screenZoomRatio),
                        (int) (rect.getWidth() * screenZoomRatio),
                        (int) (rect.getHeight() * screenZoomRatio));

                // if debug enabled, save screenshot image & cropped captcha image
                if(debug) {
                    File saveScreenshotFile = new File("./screenshot.png");
                    saveScreenshotFile.createNewFile();
                    ImageIO.write(screenshotImage, "png", saveScreenshotFile);
                    File saveCaptchaFile = new File("./captcha.png");
                    saveCaptchaFile.createNewFile();
                    ImageIO.write(captchaScreenshotImage, "png", saveCaptchaFile);
                }

                // Read captcha code from cropped screenshot
                captchaCode = tesseract.doOCR(captchaScreenshotImage);
                captchaCode = captchaCode
                        .replaceAll(" ", "")
                        .replaceAll("I", "l");
                log.info("Recognized captcha is {}", captchaCode);
                captchaInputElement.sendKeys(captchaCode);
                Utils.wait(1000);
                loginCompleted = !driver.getCurrentUrl().startsWith("https://jaccount.sjtu.edu.cn");
                if (!loginCompleted) {
                    log.info("Recognized captcha is incorrect, try again");
                }
            } catch (IOException | TesseractException e) {
                e.printStackTrace();
            }
        }
        log.info("Login success, navigating to oc.sjtu.edu.cn");
    }
}

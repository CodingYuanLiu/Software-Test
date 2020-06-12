package sjtu.testing.webui;

import lombok.extern.slf4j.Slf4j;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.ui.ExpectedCondition;
import org.openqa.selenium.support.ui.Select;
import org.openqa.selenium.support.ui.WebDriverWait;
import sjtu.testing.webui.common.CommonOperation;
import sjtu.testing.webui.common.Utils;

import java.io.File;


@Slf4j
public class FunctionalTester {
    private final static String UPLOAD_FILE = "upload.zip";
    private static String username;
    private static String password;

    public FunctionalTester() {
        username = System.getProperty("JACCOUNT_USERNAME");
        password = System.getProperty("JACCOUNT_PASSWORD");
        if (username == null || password == null) {
            log.error("Username or Password not set, you may need to set JACCOUNT_USERNAME or JACCOUNT_PASSWORD before using {}", this.getClass());
            System.exit(1);
        }
    }

    public void commitAssignment(WebDriver driver) {
        WebDriverWait waitElement = new WebDriverWait(driver, 10);
        WebElement courseSvgElement, caLinkElement, assignmentListLinkElement,
                assignmentLinkElement, commitButtonElement, uploadElement, submitButton;
        File uploadFile;

        log.info("Running commit assignment module ...");
        log.info("The homework ddl is 2020/6/18. Test it before ddl!");
        CommonOperation.login(driver, username, password);

        long startTime = Utils.GetTime();
        courseSvgElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("global_nav_courses_link")));
        long endTime = Utils.GetTime();
        log.info("Main page load time (ms): " + String.valueOf(endTime - startTime));
        courseSvgElement.click();

        caLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("span[data-reactid*=\"$17679.0:0.0.0.1\"]")));

        Utils.wait(500);
        caLinkElement.click();

        startTime = Utils.GetTime();
        assignmentListLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("a[href=\"/courses/17679/assignments\"]")));
        endTime = Utils.GetTime();
        log.info("Course main page load time (ms): " + String.valueOf(endTime - startTime));
        Utils.wait(500);
        assignmentListLinkElement.click();

        startTime = Utils.GetTime();
        assignmentLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("a[href=\"https://oc.sjtu.edu.cn/courses/17679/assignments/36947\"]")));
        endTime = Utils.GetTime();
        log.info("Assignment list page load time (ms): " + String.valueOf(endTime - startTime));
        assignmentLinkElement.click();

        startTime = Utils.GetTime();
        commitButtonElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("div.assignment-buttons")));
        endTime = Utils.GetTime();
        log.info("Assignment page load time (ms): " + String.valueOf(endTime - startTime));
        commitButtonElement.click();

        uploadElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("input.input-file")));

        uploadFile = new File(UPLOAD_FILE);
        uploadElement.sendKeys(uploadFile.getAbsolutePath());
        log.info("Success uploaded file {}", UPLOAD_FILE);

        submitButton = driver.findElement(By.id("submit_file_button"));
        submitButton.click();
        log.info("Success submitted file {}", UPLOAD_FILE);

        Utils.wait(10000);
        driver.quit();
    }

    public void profileSetting(WebDriver driver, String locale, String timezone, boolean subscribeEnabled) {
        WebDriverWait waitElement = new WebDriverWait(driver, 10);
        WebElement profileSvgElement, settingLinkElement, editButtonElement,
                subscribeCheckbox, submitButton;
        Select selectLanguageElement, selectTimeZoneElement;

        log.info("Running settings module ...");
        CommonOperation.login(driver, username, password);

        long startTime = Utils.GetTime();
        profileSvgElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("global_nav_profile_link")));
        long endTime = Utils.GetTime();
        log.info("Main page load time (ms): " + String.valueOf(endTime - startTime));
        profileSvgElement.click();


        settingLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("li[data-reactid*=\"$settings\"] span")));
        Utils.wait(500);
        settingLinkElement.click();

        startTime = Utils.GetTime();
        editButtonElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector(".edit_settings_link")));
        endTime = Utils.GetTime();
        log.info("Profile page load time (ms): " + String.valueOf(endTime - startTime));
        Utils.wait(500);
        editButtonElement.click();

        selectLanguageElement = new Select(waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("user_locale"))));
        Utils.wait(500);
        selectLanguageElement.selectByValue(locale);
        log.info("User locale has been set to {}", locale);

        selectTimeZoneElement = new Select(waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("user_time_zone"))));
        selectTimeZoneElement.selectByValue(timezone);
        log.info("Timezone has been set to {}", timezone);

        subscribeCheckbox = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("user_subscribe_to_emails")));
        if (subscribeCheckbox.isSelected() && !subscribeEnabled ||
                !subscribeCheckbox.isSelected() && subscribeEnabled) {
            subscribeCheckbox.click();
        }
        log.info("Subscribe checkbox has been set to {}", subscribeEnabled);

        submitButton = driver.findElement(By.cssSelector("button[type=\"submit\"]"));
        submitButton.click();
        log.info("Clicked submit button, success configured user settings");

        Utils.wait(5000);
        driver.quit();
    }

    public void downloadFile(WebDriver driver){
        WebDriverWait waitElement = new WebDriverWait(driver, 15);
        WebElement courseSvgElement, caLinkElement, assignmentListLinkElement, assignmentLinkElement, assignmentFileElement;

        CommonOperation.login(driver, username, password);
        log.info("Running test download file module");

        long startTime = Utils.GetTime();
        courseSvgElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("global_nav_courses_link")));
        long endTime = Utils.GetTime();
        log.info("Main page load time (ms): " + String.valueOf(endTime - startTime));
        courseSvgElement.click();

        startTime = Utils.GetTime();
        caLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("span[data-reactid*=\"$17679.0:0.0.0.1\"]")));
        endTime = Utils.GetTime();
        log.info("Course main page load time (ms): " + String.valueOf(endTime - startTime));
        Utils.wait(500);

        caLinkElement.click();
        Utils.wait(500);
        startTime = Utils.GetTime();
        assignmentListLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("a[href=\"/courses/17679/assignments\"]")));
        endTime = Utils.GetTime();
        log.info("Assignment list page load time (ms): " + String.valueOf(endTime - startTime));
        Utils.wait(500);
        assignmentListLinkElement.click();

        startTime = Utils.GetTime();
        assignmentLinkElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("a[href=\"https://oc.sjtu.edu.cn/courses/17679/assignments/36947\"]")));
        endTime = Utils.GetTime();
        log.info("Assignment page load time (ms): " + String.valueOf(endTime - startTime));
        assignmentLinkElement.click();

        assignmentFileElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.cssSelector("a[href*=\"/courses/17679/files/853844/download?\"]")));
        assignmentFileElement.click();

        log.info("Test download file successfully");

        Utils.wait(5000);
        driver.close();

    }

    public void createEvent(WebDriver driver){
        WebDriverWait waitElement = new WebDriverWait(driver, 15);
        WebElement calendarElement, createElementButtonElement, eventTitleElement, eventLocationElement,
                eventFromTimeElement, eventToTimeElement, submitButtonElement;
        CommonOperation.login(driver, username, password);

        log.info("Running test create event on the calendar");
        long startTime = Utils.GetTime();
        calendarElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("global_nav_calendar_link")));
        long endTime = Utils.GetTime();
        log.info("Main page load time (ms): " + String.valueOf(endTime - startTime));

        calendarElement.click();
        startTime = Utils.GetTime();
        createElementButtonElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("create_new_event_link")));
        endTime = Utils.GetTime();
        log.info("Calendar page load time (ms): " + String.valueOf(endTime - startTime));
        Utils.wait(1000);
        createElementButtonElement.click();

        eventTitleElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("calendar_event_title")));
        eventTitleElement.sendKeys("Test title");
        Utils.wait(500);
        assert "Test title".equals(eventTitleElement.getAttribute("value"));

        eventTitleElement.clear();
        eventTitleElement.sendKeys("Set title successfully");

        eventLocationElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("calendar_event_location_name")));
        eventLocationElement.sendKeys("Test input location");
        Utils.wait(500);
        assert "Test input location".equals(eventLocationElement.getAttribute("value"));
        eventTitleElement.clear();
        eventTitleElement.sendKeys("Set location successfully");

        eventFromTimeElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("calendar_event_start_time")));
        assert "00:00".equals(eventFromTimeElement.getAttribute("value"));
        eventFromTimeElement.clear();
        eventFromTimeElement.sendKeys("12:00");

        eventToTimeElement = waitElement.until(
                (ExpectedCondition<WebElement>) d -> d.findElement(By.id("calendar_event_end_time")));
        assert "00:00".equals( eventToTimeElement.getAttribute("value"));
        eventToTimeElement.clear();
        eventToTimeElement.sendKeys("16:00");


        eventToTimeElement.submit();

        Utils.wait(10000);
        driver.close();
    }
}

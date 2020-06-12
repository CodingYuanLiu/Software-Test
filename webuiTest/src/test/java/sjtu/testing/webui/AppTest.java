package sjtu.testing.webui;

import lombok.extern.slf4j.Slf4j;
import org.junit.BeforeClass;
import org.junit.Test;
import org.openqa.selenium.Dimension;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.chrome.ChromeOptions;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.remote.DesiredCapabilities;
import sjtu.testing.webui.common.CommonOperation;

import java.util.HashMap;
import java.util.Map;

/**
 * Unit test for simple App.
 */
@Slf4j
public class AppTest 
{
    /**
     * Rigorous Test :-)
     */
    private enum TIMEZONE {
        TOKYO,
        PEKING
    }
    private enum LOCALE {
        ENGLISH,
        CHINESE
    }
    private static final Map<TIMEZONE, String> timezoneOptions = new HashMap<>();
    private static final Map<LOCALE, String> localeOptions = new HashMap<>();
    private static final String username = "Your jaccount";
    private static final String password = "Your password";

    private static FunctionalTester functionalTester;

    @BeforeClass
    public static void setup(){

        System.setProperty("webdriver.chrome.driver", "C:\\Users\\lqyuag\\webdriver\\chromedriver.exe");

        System.setProperty("webdriver.gecko.driver", "C:\\Users\\lqyua\\webdriver\\geckodriver.exe");
        DesiredCapabilities capabilities = DesiredCapabilities.firefox();
        capabilities.setCapability("marionette", true);

        System.setProperty("TESSDATA_PREFIX", ".");
        System.setProperty("SCREEN_ZOOM_RATIO", String.valueOf(1.25));
        System.setProperty("JACCOUNT_USERNAME", username);
        System.setProperty("JACCOUNT_PASSWORD", password);
        CommonOperation.debug = false;

        timezoneOptions.put(TIMEZONE.TOKYO, "Tokyo");
        timezoneOptions.put(TIMEZONE.PEKING, "Beijing");

        localeOptions.put(LOCALE.CHINESE, "zh-Hans");
        localeOptions.put(LOCALE.ENGLISH, "en");
        functionalTester = new FunctionalTester();
    }

    @Test
    public void testDownloadFile(){
        WebDriver driver = new ChromeDriver();
        functionalTester.downloadFile(driver);
    }
    @Test
    public void testCreateEvent(){
        WebDriver driver = new ChromeDriver();
        functionalTester.createEvent(driver);
        }

    @Test
    public void testCommitAssignment(){
        WebDriver driver = new ChromeDriver();
        functionalTester.commitAssignment(driver);
    }

    @Test
    public void testProfileSetting() {
        WebDriver driver = new ChromeDriver();
        String locale = localeOptions.get(LOCALE.CHINESE);
        String timezone = timezoneOptions.get(TIMEZONE.PEKING);
        boolean subscribeEnabled = false;

        functionalTester.profileSetting(driver, locale, timezone, subscribeEnabled);
    }

    @Test
    public void testPlatform() {
        // Special setting for mobile emulation
        System.setProperty("SCREEN_ZOOM_RATIO", String.valueOf(3.0));

        // Emulation Options
        Map<String, Object> mobileEmulation = new HashMap<>();
        mobileEmulation.put("deviceName", "iPhone X");

        ChromeOptions options = new ChromeOptions();
        options.setExperimentalOption("mobileEmulation", mobileEmulation);
        WebDriver driver = new ChromeDriver(options);

        functionalTester.createEvent(driver);
        log.info("Successfully passed testing create event on iPhone X emulator");

        mobileEmulation.put("deviceName", "Galaxy S5");

        options.setExperimentalOption("mobileEmulation", mobileEmulation);
        driver = new ChromeDriver(options);
        functionalTester.createEvent(driver);
        log.info("Successfully passed testing create event on Galaxy S5 emulator");

        // Reset
        System.setProperty("SCREEN_ZOOM_RATIO", String.valueOf(1.25));
    }

    @Test
    public void testResolution() {
        WebDriver driver = new ChromeDriver();

        driver.manage().window().setSize(new Dimension(600, 800));
        functionalTester.downloadFile(driver);

        driver = new ChromeDriver();
        driver.manage().window().setSize(new Dimension(1027, 768));
        functionalTester.downloadFile(driver);
    }

    @Test
    public void testDrivers() {
        WebDriver driver;
        driver = new ChromeDriver();
        functionalTester.downloadFile(driver);

        driver = new FirefoxDriver();
        functionalTester.downloadFile(driver);

        driver = new EdgeDriver();
        functionalTester.downloadFile(driver);

    }
}

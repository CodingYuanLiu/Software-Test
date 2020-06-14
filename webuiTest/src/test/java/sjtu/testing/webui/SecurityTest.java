package sjtu.testing.webui;

import lombok.extern.slf4j.Slf4j;
import org.junit.BeforeClass;
import org.junit.Test;
import org.junit.Assert;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.chrome.ChromeOptions;
import org.openqa.selenium.logging.LogType;
import org.openqa.selenium.logging.LoggingPreferences;
import org.openqa.selenium.remote.CapabilityType;
import org.openqa.selenium.remote.DesiredCapabilities;
import sjtu.testing.webui.common.CommonOperation;

import java.util.HashMap;
import java.util.Map;
import java.util.logging.Level;

@Slf4j
public class SecurityTest {
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
    private static final String username = "Your username";
    private static final String password = "Your password";

    private static FunctionalTester functionalTester;

    @BeforeClass
    public static void setup(){

        System.setProperty("webdriver.chrome.driver", "C:\\Users\\dfysh\\chromedriver.exe");

        System.setProperty("webdriver.gecko.driver", "");
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
    public void testCookie(){
        WebDriver driver = new ChromeDriver();
        // should be redirected to login
        Assert.assertEquals("https://oc.sjtu.edu.cn/login", functionalTester.testCookie(driver).substring(0, 28));
        driver.close();
    }

    @Test
    public void testCookie2(){
        ChromeOptions options = new ChromeOptions();
        options.setExperimentalOption("w3c", false);
        DesiredCapabilities caps = DesiredCapabilities.chrome();
        LoggingPreferences logPrefs = new LoggingPreferences();
        logPrefs.enable(LogType.PERFORMANCE, Level.INFO);
        caps.setCapability(CapabilityType.LOGGING_PREFS, logPrefs);
        options.merge(caps);
        WebDriver driver = new ChromeDriver(options);
        Assert.assertTrue(functionalTester.testCookie2(driver));
        driver.close();
    }
}

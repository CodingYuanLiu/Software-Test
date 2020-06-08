package sjtu.testing.webui.common;

import java.util.Calendar;

public class Utils {
    public static void wait(int milliseconds) {
        try {
            Thread.sleep(milliseconds);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
    public static long GetTime(){
        return Calendar.getInstance().getTimeInMillis();
    }
}

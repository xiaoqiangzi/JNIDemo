package mvpdemo.zhang.com.jnidemo;

/**
 * Created by Administrator on 2018/3/13.
 */

public class JNIUtils {
    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public static native String stringFromJNI();
    public static native String getHelloJni();
    public static native String gethelloWord();
}

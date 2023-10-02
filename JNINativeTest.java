import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class JNINativeTest {
    static {
        System.loadLibrary("native");
    }
    public static void main(String[] args) {
        int iterations = 5;
        ExecutorService executorService = Executors.newSingleThreadExecutor();
        executorService.execute(new WorkerClass(iterations));

    }

}

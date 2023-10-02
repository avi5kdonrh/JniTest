import java.nio.ByteBuffer;
import java.util.concurrent.CountDownLatch;

public class MemTest {
    public static void main(String[] args) throws Exception{
        CountDownLatch latch = new CountDownLatch(1);
        System.out.println("Starting");
        for (int x=0; x<9; x++) {
            ByteBuffer byteBuffer = ByteBuffer.allocateDirect(102400000);
            for (int i = 0; i < byteBuffer.capacity(); i++) {
                byteBuffer.put((byte) 'a');
                if(x%2 == 0 && i ==1024){
                    break;
                }
            }
            byteBuffer.flip();
            System.out.println(byteBuffer.get());
            Thread.sleep(10000);
        }
        latch.await();
    }
}
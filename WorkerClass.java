public class WorkerClass implements Runnable {
    private int iterations;
  WorkerClass(int iterations) {
      this.iterations = iterations;
  }
    @Override
    public void run() {
              doSomething(iterations);
    }
    private native void doSomething(int iterations);
}

package v1;

public class Thread2 extends Thread {
	public void run() {
		int x = Main.B.get();
		int y = Main.A.get();
		x -= 20000;
		y += 20000;
		Main.B.set(x);
		
		Thread.yield();
		try {sleep(50);} catch (Exception e) {}
		
		Main.A.set(y);
		
		System.out.println("A:" + Main.A.get() + ",B" + Main.B.get());
	}
}

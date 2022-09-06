package v1;

public class Thread1 extends Thread {
	public void run() {
		int x = Main.A.get();
		int y = Main.B.get();
		
		Thread.yield();
		try {sleep(50);} catch (Exception e) {}
		
		y += 50000;
		x -= 50000;
		Main.A.set(x);
		Main.B.set(y);
		
		System.out.println("A:" + Main.A.get() + ",B" + Main.B.get());
	}
}

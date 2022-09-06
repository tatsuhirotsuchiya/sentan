package v1;

public class Main {
	static Account A = new Account(100000);
	static Account B = new Account(100000);
	
	public static void main(String[] args) {

		new Thread1().start();
		new Thread2().start();

	}

}

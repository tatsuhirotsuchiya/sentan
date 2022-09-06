package v1;

public class Account {
	int value;
	Account (int x) {
		this.value = x;
	}
	public synchronized void set (int x) {
		value = x;
	}
	public synchronized int get () {
		return value;
	}
}

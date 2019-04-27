class superclass{
	int n;
	void superclass(){
		n++;
	}
	void display() {
		System.out.println("This is SuperClass.");
		System.out.println("n = "+n);
	}
}
class subclass extends superclass{
	int n;
	void superclass(){
		n++;
	}
	void display() {
		System.out.println("This is Subclass.");
		System.out.println("n = "+n);
	}
}
public class Overridden {
	public static void main(String[] args) {
		superclass sup = new superclass();
		sup.superclass();
		sup.display();
		
		subclass sub = new subclass();
		sub.superclass();
		sub.display();
	}
	
}

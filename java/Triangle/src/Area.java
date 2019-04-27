class TRIANGLE{
	double base, height, area;
	void getinput() {
		base = 5.5;
		height = 7.7;
		area = (base * height) / 2;
	}
	void display() {
		System.out.println("The area is : "+area);
	}
}
public class Area {
	public static void main(String[] args) {
		TRIANGLE t = new TRIANGLE();
		t.getinput();
		t.display();
	}
}

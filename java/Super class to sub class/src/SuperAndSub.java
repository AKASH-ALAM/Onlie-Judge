import java.io.*;
class student { //Super class
	int roll;
	String name;
}
class Result extends student{ //Here Result is sub class.
	float marks;
	void getdata() {
		roll = 372721;
		name = "Akash";
		marks = 80.2f;
	}
	void display() {
		System.out.println("Name is : "+name);
		System.out.println("Roll is : "+roll);
		System.out.println("Marks is : "+marks);
	}
}
public class SuperAndSub {
	public static void main(String[] args) {
		Result obj = new Result();
		obj.getdata();
		obj.display();
	}
}

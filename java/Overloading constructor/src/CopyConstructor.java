class student{
	int roll;
	String name;
	float marks;
	student(int r, String n, float m){ //constructor method
		roll = r;
		name = n;
		marks = m;
	}
	student(student s){ //copy constructor
		roll = s.roll;
		name = s.name;
		marks = s.marks;
	}
	
	void display() {
		System.out.println("Name is : "+name);
		System.out.println("Roll is : "+roll);
		System.out.println("Marks is : "+marks);
	}
}
public class CopyConstructor {

	public static void main(String[] args) {
		student s1 = new student(1,"Ab Rahim", 55.6f);
		System.out.println("Record of 1");
		s1.display();
		System.out.println();
		student s2 = new student(s1);
		System.out.println("Record of 2");
		s2.display();
		System.out.println("Both are same");
	}

}

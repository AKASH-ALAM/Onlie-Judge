	class student{
		int roll;
		String name;
		float marks;
		public student(int r, String n, float m) {
			roll = r;
			name = n;
			marks = m;
		}
		student(student s){
			roll = s.roll;
			name = s.name;
			marks = s.marks;
		}
		void display() {
			System.out.println("Roll is "+roll);
			System.out.println("Name is "+name);
			System.out.println("Marks is "+marks);
		}
	}
	public class Constructor{
		public static void main (String args[]) {
			student s1 = new student(372721, "Akash", 88.2f);
			System.out.println("Record of s1");
			s1.display(); System.out.println();
			System.out.println("Record of s2");
			student s2 = new student(s1);
			s2.display();
			System.out.println("Both are same........");
		}
	}
class student {
	String name;
	void getname() {
		name = "Akash";
		System.out.println(name);
	}
}

class roll extends student {
	int roll;
	void getroll() {
		roll = 372721;
		System.out.println(roll);
	}
}
class marks extends student {
	float marks;
	void getmarks() {
		marks = 55.5f;
		System.out.println(marks);
	}
}

class session extends student {
	int  sess;
	void getsession() {
		sess = 16017;
		System.out.println(sess);
	}
}

public class Hya {

	public static void main(String[] args) {
		student st = new student();
		st.getname();
		roll rl = new roll();
		rl.getroll();
		marks mk = new marks();
		mk.getmarks();
		session sion = new session();
		sion.getsession();

	}

}

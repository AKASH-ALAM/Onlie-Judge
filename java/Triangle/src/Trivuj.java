import java.io.*;
class triangle{
	double base , height, area;
	void getdata(){
		try {
			String s;
			InputStreamReader in = new InputStreamReader(System.in);
			BufferedReader br = new BufferedReader(in);
			System.out.print("Input base : ");
			s = br.readLine();
			base = Double.parseDouble(s);
			System.out.print("Input height : ");
			s = br.readLine();
			height = Double.parseDouble(s);
			area = (base * height) / 2;
		}catch(Exception E) {}
	}
	void display() {
		System.out.println("Area is : "+area);
	}
}
public class Trivuj {

	public static void main(String[] args) {
		triangle obj = new triangle();
		obj.getdata();
		obj.display();
	}

}

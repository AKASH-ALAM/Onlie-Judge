import java.io.*;
public class DhararJogfol {

	public static void main(String[] args) {
		int n, sum = 0;
		String s;
		try {
			InputStreamReader in = new InputStreamReader(System.in);
			BufferedReader br = new BufferedReader(in);
			s = br.readLine();
			n = Integer.parseInt(s);
			for(int i = 2; i <= n; i += 2) {
				sum = sum + i;
			}
			System.out.println("The sum is: "+sum);
		}catch(Exception E) {}
		
	}

}

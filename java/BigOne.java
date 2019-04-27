
 * 
 * Copyright 2018 AKASH <akash.ap006@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

import java.io.*;
public class BigOne {
	
	public static void main (String[] args) {
		int a, b, c;
		String s;
		try{
			InputStreamReader in = new InputStreamReader(System.in);
			BufferedReader br = new BufferedReader(in);
			s = br.readLine();
			a = Integer.parseInt(s);
			
			s = br.readLine();
			b = Integer.parseInt(s);
			
			s = br.readLine();
			c = Integer.parseInt(s);
			
			if(a > b && a > c) System.out.println(a+" is bigger then "+b+" and "+c);
			else if(b > a && b > c) System.out.println(b+" is bigger then "+a+" and "+c);
			else System.out.println(c+" is bigger then "+a+" and "+b);
			
		}catch(Exception E){}
			
	}
}


// Accept string from user & Display each word in reverse order
// Normal For loop
// Index wise travel

import java.util.*;

class Demo
{
	public void ReverseDisplay(String str)
	{
		String temp = str.trim().replaceAll("[ ]{2,}", " ");
		String arr[] = temp.split(" ");

		for(int i = 0; i < arr.length; i++)
		{
			StringBuffer bobj = new StringBuffer(arr[i]);
			System.out.println(bobj.reverse());
			bobj = null;
		}
		
	}
}


class program236
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();

		

		Demo obj = new Demo();
		obj.ReverseDisplay(str);

	}
}
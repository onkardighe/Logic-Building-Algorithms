// Accept string from user & Display each word in reverse order
// Normal For loop
// Index wise travel


// IP : Hello Demo India
// OP : olleH omeD aidnI

import java.util.*;

class Demo
{
	public String ReverseWord(String str)
	{
		String temp = str.trim().replaceAll("[ ]{2,}", " ");
		String arr[] = temp.split(" ");

		String sRet = "";
		for(int i = 0; i < arr.length; i++)
		{
			StringBuffer bobj = new StringBuffer(arr[i]);
			
			sRet = sRet +" "+bobj.reverse();

			bobj = null;
		}
		return sRet.trim();
	}
}


class program237
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();

		

		Demo obj = new Demo();
		String sRet = obj.ReverseWord(str);
		System.out.println(sRet);

	}
}
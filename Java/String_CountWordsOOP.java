// Accept a String from user & Count Number of Words

import java.util.*;

class Demo
{
	public int WordCount(String str)
	{
		String temp = str.trim().replaceAll("[ ]{2,}"," ");
		String arr[] = temp.split(" ");
		return arr.length;

	}
}


class program230
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();

		Demo obj = new Demo();
		iRet = obj.WordCount(str);
		System.out.println("Number of words :"+iRet);

	}
}
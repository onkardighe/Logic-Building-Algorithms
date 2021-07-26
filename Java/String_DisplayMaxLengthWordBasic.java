// Accept string from user & Display maximum Length word
// Normal For loop
// Index wise travel

import java.util.*;

class Demo
{
	public void MaxLengthWord(String str)
	{
		String temp = str.trim().replaceAll("[ ]{2,}", " ");
		String arr[] = temp.split(" ");

		int iMax = 0, index = 0;
		for(int i = 0; i < arr.length; i++)
		{
			if((arr[i].length()) > iMax)
			{
				iMax = arr[i].length();
				index  = i;
			}
		}
		System.out.println("Longest Word : "+arr[index]);
	}
}


class program235
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();

		

		Demo obj = new Demo();
		obj.MaxLengthWord(str);

	}
}
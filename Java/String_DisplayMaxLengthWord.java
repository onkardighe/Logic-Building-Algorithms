// Accept string from user & Display maximum Length word
// Using For each  loop

import java.util.*;

class Demo
{
	public void MaxLengthWord(String str)
	{
		String temp = str.trim().replaceAll("[ ]{2,}", " ");
		String arr[] = temp.split(" ");

		String sTemp = arr[0];
		for(String s : arr)
		{
			if((s.length()) > (sTemp.length()))
			{
				sTemp = s;
			}
		}
		System.out.println("Longest Word : "+sTemp);
	}
}


class program234
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
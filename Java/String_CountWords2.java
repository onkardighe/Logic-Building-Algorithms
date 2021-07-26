// Accept a String from user & Count Number of Words

import java.util.*;

class StringX
{
	public int CountWords(String str)
	{
		char arr[] = str.toCharArray();

		for(int i = 0; i<(arr.length-1); i++)
		{
			
		}
		return 0;
	}
}


class program227
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();
		System.out.println("String length :"+str.length());

		String temp = str.trim();
		System.out.println("New String : "+temp);
		System.out.println("Lenth of New String :"+temp.length());

		String temp2 = temp.replaceAll("\\s{2,}","");
		System.out.println("replace All String :"+temp2);

	}
}
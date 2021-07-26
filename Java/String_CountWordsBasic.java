// Accept a String from user & Count Number of Words

import java.util.*;

}


class program229
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();
		System.out.println("String length :"+str.length());

		String temp = str.trim().replaceAll("[ ]{2,}"," ");

		System.out.println("New string after removing extra white spaces :"+temp.length());
		System.out.println("Modified String is :"+temp);

	}
}
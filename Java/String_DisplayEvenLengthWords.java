// Accept string from user & Display only such words from string whose length is even
// Using For each  loop
import java.util.*;

class Demo
{
	public void EvenLengthWords(String str)
	{
		String temp = str.trim().replaceAll("[ ]{2,}"," ");
		String arr[] = temp.split(" ");
		
		for(String s : arr)
		{
			if((arr[i].length() % 2) == 0)
			{
				System.out.println(s);
			}
		}
	}
}


class program233
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();

		Demo obj = new Demo();
		obj.EvenLengthWords(str);

	}
}
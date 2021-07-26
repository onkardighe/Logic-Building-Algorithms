// Accept string from user & Display each word in reverse order
// Normal For loop
// Index wise travel


// IP : Hello Demo India
// OP : olleH omeD aidnI

import java.util.*;

class Demo
{
	public void CharacterFrequency(String str)
	{
		int Freqency = 0;
		char arr[] = str.toCharArray();

		HashMap<Character,Integer>hobj = new HashMap<Character,Integer>();
		for(char ch : arr)
		{
			if(hobj.containsKey(ch))
			{
				Freqency = hobj.get(ch);
				hobj.put(ch, Freqency+1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		System.out.println(hobj);

	}
}


class program238
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;

		System.out.println("Enter String :");
		String str = sobj.nextLine();

		

		Demo obj = new Demo();
		obj.CharacterFrequency(str);

	}
}
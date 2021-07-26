// Normal Way

import java.util.*;

class IPPackUnpack
{
	public int Packing(int no1, int no2, int no3, int no4)
	{
		int ans = 0;
		int a = no1<<24;
		int b = no2<<16;
		int c = no3<<8;
		int d = no4;
		ans = a | b | c | d; 
		return ans;
	}
}



class program211
{
	public static void main(String[] args)
	{
		int arr[] = new int[4];
		int iRet = 0;

		Scanner sobj = new Scanner(System.in);


		System.out.println("Enter First Number :");
		int no1 = sobj.nextInt();
		System.out.println("Enter Second Number :");
		int no2 = sobj.nextInt();
		System.out.println("Enter thirst Number :");
		int no3 = sobj.nextInt();
		System.out.println("Enter Fourth Number :");
		int no4 = sobj.nextInt();

        IPPackUnpack obj = new IPPackUnpack();
        iRet = obj.Packing(no1,no2,no3,no4);
        System.out.println("Packing : "+iRet);

	}
}
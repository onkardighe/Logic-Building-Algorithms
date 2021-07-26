import java.util.*;

class Matrix
{
	public int Addition(int arr[][])
	{
		int iSum = 0;
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				iSum = iSum + arr[i][j];
			}
		}
		return iSum;
	}
}

class program214
{

	public static void main(String str[])
	{
		int iRet = 0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number of Rows :");
		int row = sobj.nextInt();
		System.out.println("Enter Number of Columns :");
		int col = sobj.nextInt();

		int arr[][] = new int[row][col];
		
		System.out.println("Enter Values :");
		for(int i = 0; i < arr.length; i++)
		{
			for(int  j = 0; j < arr[i].length; j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
		System.out.println("Entered Elements are :");
		for(int i = 0; i < arr.length; i++)
		{
			for(int  j = 0; j < arr[i].length; j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}

		Matrix mobj = new Matrix();
		iRet = mobj.Addition(arr);
		System.out.println("Addition of all Elements : "+iRet);
		arr = null;				// Inviting garbage Collector to come here
	}
}
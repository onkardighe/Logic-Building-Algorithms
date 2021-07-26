// 1 2 3 4 5 6 7 8 9
// Matrix Class Inherited 
// Addition of all Elements

import java.util.*;
import MatrixPackage.Matrix;

class Demo extends Matrix
{
	public Demo(int iRow, int iCol)
	{
		super(iRow,iCol);
	}
	public int Addition()
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

class program218
{
	public static void main(String str[])
	{
		
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number of Rows :");
		int row = sobj.nextInt();
		System.out.println("Enter Number of Columns :");
		int col = sobj.nextInt();

		Demo obj = new Demo(row, col);
		obj.Accept();
		obj.Display();
		int iRet = obj.Addition();
		System.out.println("Addition of all elements is : "+iRet);


		System.gc();
	}
}
// 1 2 3 4 5 6 7 8 9
// Matrix Class Inherited 
// Summation of Border Elements

import java.util.*;
import MatrixPackage.Matrix;

class Demo extends Matrix
{
	public Demo(int iRow, int iCol)
	{
		super(iRow,iCol);
	}
	
	public int SummationRow()
	{
		int iSum = 0;
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				if((i == 0) || (j == 0) || (i == (arr.length)-1) || (j == (arr[i].length)-1))
				{
					iSum = iSum + arr[i][j];
				}
			}
		}
		return iSum;
	}
}

class program223
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
		int iRet = obj.SummationRow();
		System.out.println("Addition of Border Elements :"+iRet);
		
		System.gc();
	}
}
// 1 2 3 4 5 6 7 8 9
// Matrix Class Inherited 
// Summation element from every row

import java.util.*;
import MatrixPackage.Matrix;

class Demo extends Matrix
{
	public Demo(int iRow, int iCol)
	{
		super(iRow,iCol);
	}
	
	public void SummationRow()
	{
		int iSum = 0;
		for(int i = 0; i < arr.length; i++)
		{
			iSum = 0;
			for(int j = 0; j < arr[i].length; j++)
			{
				iSum = iSum + arr[i][j];
			}
			System.out.println(+iSum);
		}
	}
}

class program222
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
		System.out.println("Maximum Element from Every Row :");
		obj.SummationRow();
		
		System.gc();
	}
}
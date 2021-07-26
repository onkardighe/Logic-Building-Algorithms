// 1 2 3 4 5 6 7 8 9
// Matrix Class Inherited 
// Maximum element from every row

import java.util.*;
import MatrixPackage.Matrix;

class Demo extends Matrix
{
	public Demo(int iRow, int iCol)
	{
		super(iRow,iCol);
	}
	
	public void MaximumRow()
	{
		int iMax = arr[0][0];
		for(int i = 0; i < arr.length; i++)
		{
			iMax = arr[i][0];
			for(int j = 0; j < arr[i].length; j++)
			{
				if(arr[i][j] > iMax)
				{
					iMax = arr[i][j];
				}
			}
			System.out.println(iMax);
		}
	}
}

class program220
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
		obj.MaximumRow();
		
		System.gc();
	}
}
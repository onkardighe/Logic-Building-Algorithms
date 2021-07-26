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
	public int Maximum()
	{
		int iMax = arr[0][0];
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				if(arr[i][j] > iMax)
				{
					iMax = arr[i][j];
				}
			}
		}
		return iMax;
	}

	public int Minimum()
	{
		int iMin = arr[0][0];
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				if(arr[i][j] < iMin)
				{
					iMin = arr[i][j];
				}
			}
		}
		return iMin;
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
		int iRet = obj.Maximum();
		System.out.println("Minimum is : "+iRet);
		iRet = obj.Minimum();
		System.out.println("Minimum is : "+iRet);



		System.gc();
	}
}
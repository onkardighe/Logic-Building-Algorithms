//  5 6 8 3 4 2 8 6 7 2 1 2 1 29 2 3 1 0 1 2 2 7 25 3 3 0 1 4 2 5
// Matrix Class Inherited 
// Forest Problem
// Addition of all surrounded element is equals to that Number

import java.util.*;
import MatrixPackage.Matrix;

class Demo extends Matrix {
	public Demo(int iRow, int iCol) 
	{
		super(iRow, iCol);
	}

	public void Forest() {
		for (int i = 1; i < (arr.length-1); i++) 
		{
			for (int j = 1; j < (arr[i].length-1); j++) 
			{
				if (arr[i][j] == (arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j - 1] + arr[i][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1])) 
				{
					System.out.println("Forest Element : " + arr[i][j]);
				}
			}
		}
	}
}

class program224 
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
		obj.Forest();

		System.gc();
	}
}

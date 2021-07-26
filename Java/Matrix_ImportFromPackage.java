// 1 2 3 4 5 6 7 8 9

import java.util.*;
import MatrixPackage.Matrix;


class program217
{
	public static void main(String str[])
	{
		
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number of Rows :");
		int row = sobj.nextInt();
		System.out.println("Enter Number of Columns :");
		int col = sobj.nextInt();

		Matrix mobj = new Matrix(row, col);
		mobj.Accept();
		mobj.Display();
		int iRet = mobj.Addition();
		System.out.println("Addition of all elements is : "+iRet);


		System.gc();
	}
}
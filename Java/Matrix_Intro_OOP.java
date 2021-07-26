// 1 2 3 4 5 6 7 8 9

import java.util.*;

class Matrix
{
	public int arr[][];
	public Matrix(int iRow, int iCol)
	{
		arr = new int[iRow][iCol];
	}

	protected void finalize()
	{
		arr = null;
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Elements :");
		for(int i = 0; i < arr.length; i++)
		{
			for(int  j = 0; j < arr[i].length; j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
	}

	public void Display()
	{
		System.out.println("Elements of Matrix are :");
		for(int i = 0; i < arr.length; i++)
		{
			for(int  j = 0; j < arr[i].length; j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
}

class program215
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

		System.gc();
	}
}
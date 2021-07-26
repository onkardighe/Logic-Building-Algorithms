/*

1 1 1 1 1
3       3
5       5
7       7
9 9 9 9 9

*/

import java.util.*;

class Pattern
{
    void Display(int iRow, int iCol)
    {
        int no1 = 1;
        for(int i = 1; i<= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if((i == 1) || (i == iRow) || (j == 1) || j == iCol)
                {
                    System.out.print(no1+"\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }
            no1 = no1 + 2;
            System.out.println();
        }
    }
}

class program198 
{
    public static void main(String[] args) 
    {
        int no1, no2, ans;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number :");
        no1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        no2 = sobj.nextInt();
        
        Pattern pobj = new Pattern();
        pobj.Display(no1, no2);
    }
    
}

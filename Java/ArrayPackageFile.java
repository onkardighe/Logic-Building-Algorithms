// Package File
// Customised Accept Function




package MarvellousArrayX;

import java.util.*;

public class MarvellousArrayX
{
    public int Arr[];
    public boolean sorted;

    public MarvellousArrayX(int iSize)
    {
        Arr = new int[iSize];
        sorted = true;                  // Flag
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elements :");

        Arr[0] = sobj.nextInt();


        for(int i = 1; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
            if(Arr[i-1] > Arr[i])
            {
                sorted = false;
            }
        }

    }

    public void Display()
    {
        System.out.println("Elements in Array are :");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }

}

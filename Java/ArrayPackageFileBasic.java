package MarvellousArray;

import java.util.*;



public class MarvellousArray
{
    public int Arr[];

    public MarvellousArray(int iSize)
    {
        Arr = new int[iSize];

    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elements :");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
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

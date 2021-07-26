// GENERIC 

import java.util.*;

class BubbleSort
{
    public void Sort(int Arr[])
    {
        int i = 0, j = 0, temp = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; (j<Arr.length-1); j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
        }
    }
}

class program253
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements :");
        int no = sobj.nextInt();

        int Arr[] = new int[no];
        System.out.println("Enter Elements :");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Entered Elements :");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        BubbleSort obj = new BubbleSort();
        obj.Sort(Arr);
        System.out.println("Elements After Sorting are :");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();


    }
}
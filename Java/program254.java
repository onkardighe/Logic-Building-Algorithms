// GENERIC SORTING

import java.util.*;

class BubbleSort<T extends Comparable<T>>
{
    public void Sort(T Arr[])
    {
        
        int i = 0, j = 0;
        T temp;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; (j<Arr.length-1); j++)
            {
                if(Arr[j].compareTo(Arr[j+1]) > 0)
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
        }
        

    }
}

class program254
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements :");
        int no = sobj.nextInt();

        Integer Arr[] = new Integer[no];
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

        BubbleSort <Integer>obj = new BubbleSort<Integer>();
        obj.Sort(Arr);
        System.out.println("Elements After Sorting are :");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();


    }
}
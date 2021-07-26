// SORTING

//Efficint Bubble Sorting
//Using swap flag  
// importing MarvellousArrayX


import java.util.*;
import MarvellousArrayX.MarvellousArrayX;


class BubbleSort extends MarvellousArrayX
{
    public BubbleSort(int iSize)
    {
        super(iSize);
    }

    public void Sort()
    {
        int i = 0, j = 0, temp = 0;
        boolean swap = false;

        if(sorted == true)
        {
            return;
        }

        for(i = 0; i < Arr.length; i++)
        {
            swap = false;
            for(j = 0; (j<Arr.length-1); j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    swap = true;
                }
            }

            if(swap == false)
            {
                break;
            }
            System.out.println("Data After Pass : "+(i));
            for(int k = 0; k < Arr.length; k++)
            {
                System.out.print(Arr[k]+"\t");
            }
            System.out.println();   
        }
    }
}

class program251

{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of elements ");
        int no = sobj.nextInt();

        BubbleSort obj = new BubbleSort(no);
        obj.Accept();
        obj.Display();

        obj.Sort();
        obj.Display();
    }
}
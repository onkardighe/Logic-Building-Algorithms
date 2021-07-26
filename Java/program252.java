// SORTING

// Bubble Sort
// Efficint Bubble Sorting (Using Sorted & swap flags)
// Plus
// Increasing & Decreasing choice
// importing MarvellousArrayX


// import java.io.BufferedReader;
import java.util.*;
import MarvellousArrayX.MarvellousArrayX;


class BubbleSort extends MarvellousArrayX
{
    public BubbleSort(int iSize)
    {
        super(iSize);
    }

    public void Sort(int iChoice)
    {
        int i = 0, j = 0, temp = 0;
        boolean swap = false;

        if(sorted == true)
        {
            return;
        }

        if(iChoice == 1)
        {
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
            }
        }
        else if(iChoice == 2)
        {
            for(i = 0; i < Arr.length; i++)
            {
                swap = false;
                for(j = 0; (j<Arr.length-1); j++)
                {
                    if(Arr[j] < Arr[j+1])
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
            }
        }
    }
}

class program252

{
    public static void main(String[] args) // throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number of elements ");
        int no = sobj.nextInt();

        BubbleSort obj = new BubbleSort(no);
        
        System.out.println("Enter type of sort you want");
        System.out.println("1 : For increasing order");
        System.out.println("2 : For Decreasing order");
        int iChoice = sobj.nextInt();

        obj.Accept();
        obj.Display();
        obj.Sort(iChoice);

        System.out.println("Data after Sorting :");
        obj.Display();
    }
}
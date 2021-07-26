// CheckSorted() Function


import java.util.*;
import MarvellousArray.MarvellousArray;


class Searching extends MarvellousArray
{
    public Searching(int iSize)
    {
        super(iSize);
    }

    public boolean SearchLinear(int no)
    {
        int i = 0; 
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == no)
            {
                break;
            }
        }
        if(i == Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        } 
    }

    public boolean SearchBidirectional(int no)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        
        while(iStart <= iEnd)
        {
            if((Arr[iStart] == no) || (Arr[iEnd] == no))
            {
                break;
            }
            iStart++;
            iEnd--;
        }

        if(iStart > iEnd)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public boolean CheckSorted()
    {
        int i = 0;
        for(i = 0; i < Arr.length-1; i++)
        {
            if(Arr[i] > Arr[i+1])
            {
                break;
            }
        }
        if(i == (Arr.length-1))
        {
            return true;
        }
        else
        {
            return false;
        } 
    }
}

class program243
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of elements ");
        int no = sobj.nextInt();

        Searching obj = new Searching(no);
        obj.Accept();
        obj.Display();

        boolean bRet = obj.CheckSorted();

        if(bRet == true)
        {
            System.out.println("Array is Sorted");
        }
        else
        {
            System.out.println("NOT Sorted!!");
        }
    
    }
}
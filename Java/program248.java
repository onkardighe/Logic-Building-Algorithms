// Search() Function
// Abstaction
// importing MarvellousArrayX

// Wrapper Function Writings Search()

import java.util.*;

import javax.swing.plaf.TreeUI;

import MarvellousArrayX.MarvellousArrayX;


class Searching extends MarvellousArrayX
{
    public Searching(int iSize)
    {
        super(iSize);
    }


    private boolean SearchBidirectional(int no)
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

    private boolean BinarySearch(int no)
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iMid = (iEnd+iStart)/2;

        //  Filters 
        if(sorted == false)
        {
            return(SearchBidirectional(no));
        }

        if((no < Arr[iStart]) || (no > Arr[iEnd]))
        {
            return false;
        }

        while(iStart <= iEnd)
        {
            if(Arr[iMid] == no)
            {
                break;
            }
            else
            {
                if(no < Arr[iMid])
                {
                    iEnd = iMid-1;
                }
                else
                {
                    iStart = iMid+1;
                }
                iMid = (iStart + iEnd)/2;
            }
        }
        if(Arr[iMid] == no)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    public boolean Search(int no)
    {
        if(sorted  == true)
        {
            return(BinarySearch(no));
        }
        else
        {
            return(SearchBidirectional(no));
        }
    }
}

class program248

{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of elements ");
        int no = sobj.nextInt();

        Searching obj = new Searching(no);
        obj.Accept();
        obj.Display();

        System.out.println("Enter Number ");
        no = sobj.nextInt();

        boolean bRet = obj.Search(no);

        if(bRet == true)
        {
            System.out.println("Found !!");
        }
        else
        {
            System.out.println("NOT Found!!");
        }
    }
}
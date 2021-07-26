// Accept N numbers from user & Give its Sum

import java.util.*;

class Numbers
{
    public int Sum(int Arr[])
    {
        int iSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
}


class program201 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;
        System.out.println("Enter Number of Elements :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter Values :");
        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Numbers nobj = new Numbers();
        int iRet = nobj.Sum(Arr);
        System.out.println("Addition of N numbers is : "+iRet);
    }
}

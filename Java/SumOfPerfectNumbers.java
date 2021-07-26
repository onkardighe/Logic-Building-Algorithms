// Accpet N numbers from user & Display Sum of Perfect Numbers
// Modular Code -> Separate Functions
import java.util.*;

class Numbers
{
    public boolean CheckPerfect(int iNo)
    {
        int iSum = 0;
        for(int i = 1; i <= (iNo/2); i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum ==  iNo)
        {
            return true;
        }
        else 
        {
            return false;
        }
    } 

    public int Perfect(int Arr[])
    {
        int iSum = 0;
        for(int i = 0; i< Arr.length; i++)
        {
            if(CheckPerfect(Arr[i]) == true)
            {
                iSum = iSum + Arr[i];
            }
        }
        return iSum;
    }


    public int SumPerfect(int Arr[])
    {
        int iRet = 0, iSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            iSum = 0;
            for(int j = 1; j <= (Arr[i])/2; j++)
            {
                if(Arr[i] % j == 0)
                {
                    iSum = iSum + j;
                }
            }
            if(iSum == Arr[i])
            {
                iRet = iRet + Arr[i];
            }
        }
        return iRet;
    }
}


class program202 
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
        int iRet = nobj.Perfect(Arr);
        System.out.println("Addition of Perfect numbers is : "+iRet);
    }
}

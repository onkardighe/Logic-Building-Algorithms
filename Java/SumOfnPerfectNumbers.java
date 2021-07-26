// Accpet N numbers from user & Display Sum of Perfect Numbers
//  Non Modular -> Separate Functions
import java.util.*;

class Numbers
{
    public int SumPerfect(int Arr[])
    {
        int iRes = 0, iSum = 0;
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
                iRes = iRes + Arr[i];
            }
        }
        return iRes;
    }
}


class program203
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
        int iRet = nobj.SumPerfect(Arr);
        System.out.println("Addition of Perfect numbers is : "+iRet);
    }
}

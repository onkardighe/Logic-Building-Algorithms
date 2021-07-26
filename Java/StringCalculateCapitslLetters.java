// Accept A String from user & Calculate Capital Letters from it

import java.util.*;

class StringX
{
    public int CapCount(String str)
    {
        int iCnt = 0;
        char arr[] = str.toCharArray();
        for(int i = 0; i < arr.length; i++)
        {
            if((arr[i] >= 'A') && (arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}


class program206
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter String :");

        String str = sobj.nextLine();

        StringX obj = new StringX();
        iRet = obj.CapCount(str);
        System.out.println("Number of Capital Letters : "+iRet);
    }
}
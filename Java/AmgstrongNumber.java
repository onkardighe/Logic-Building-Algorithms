
//  Check given number is amgstrom or NOT

// 153 = (1)^3 + (5)^3 + (3)^3






import java.util.*;

class Digits 
{
    boolean Armstrong(int iNo)
    {
        int iTemp = iNo;
        int iCnt = 0, iSum = 0, iDigit = 0, iPower = 1;
        while(iTemp != 0)
        {
            iTemp = iTemp/10;
            iCnt++;
        }
        iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            for(int i = 1; i <= iCnt; i++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;
            iTemp = iTemp / 10;
        }
        System.out.println(iSum);
        if(iSum == iNo)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }    
}

class program200 {
    public static void main(String[] args) {
        int no;
        boolean bRet;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        no = sobj.nextInt();

        Digits dobj = new Digits();
        bRet = dobj.Armstrong(no);
        if(bRet == true)
        {
            System.out.println("It is Armstrong Number");
        }
        else 
        {
            System.out.println("It is not Armstrong Number");
        }
    }

}


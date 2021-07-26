//  Find generic root of a number

// 927 -> 18 -> 9
// 9975 -> 20 -> 3
// 89457 -> 33 -> 6
// 8 -> 8
// 23 -> 5



import java.util.*;

class Digits {
    int GenRoot(int iNo) 
    {
        int iSum = iNo;
        
        while(iSum > 9)
        {
            iNo = iSum;
            iSum = 0;
            while(iNo != 0)
            {
                iSum = iSum + (iNo%10);
                iNo = iNo/10;
            }
        }
        return iSum; 
    }

    int GenRootR(int iNo)
    {
        if(iNo != 0)
        {
            iSum = iSum + (iNo%10);
        }
        return 0;
    }
}

class program199 {
    public static void main(String[] args) {
        int no, Ret;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        no = sobj.nextInt();

        Digits dobj = new Digits();
        Ret = dobj.GenRoot(no);
        System.out.println("Generic Root is : " + Ret);
    }

}

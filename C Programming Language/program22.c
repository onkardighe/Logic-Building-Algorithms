//Accept number from user & Count Even Digits from numbers 
//Input : 8642
//output : 4
//Input : 7139
//output : 0



#include<stdio.h>

int evenDigits(int iNo)
{
    int iDigit = 0, iCount=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit%2==0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}



int main()
{
    
    int iValue = 0, iRet=0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = evenDigits(iValue);
    printf("Even Digits in Number are : %d",iRet);
    return 0;
}


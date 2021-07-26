//Accept number from user & Count Even Digits from numbers 
//PROGAM VERSION 2        (Without using iDigit)
//Input : 8642
//output : 4
//Input : 7139
//output : 0


#include<stdio.h>
int EvenDigits(int iNo)
{
    int iCnt = 0;               //Filter
    if(iNo < 0)
    {iNo = -iNo;}
    while(iNo > 0)
    {
        if(((iNo %10) % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = EvenDigits(iValue);
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;
}


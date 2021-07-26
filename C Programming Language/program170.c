// Accept a number form user & Count number of ON Bits in that Number 

#include<stdio.h>

int CountOnesI(unsigned int iNo)
{
    int iMask = 1;
    int i = 0, iCnt = 0;

    while(i < 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
    }
    return iCnt;
}

int CountOnesR(unsigned int iNo)
{
    static int iMask = 1;
    static int i = 0;
    static int iCnt = 0;

    if(i < 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
        CountOnesR(iNo);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    unsigned int iValue = 0;
    printf("Enter Number :");
    scanf("%ud",&iValue);


    iRet = CountOnesR(iValue);
    printf("Number of Ones is : %d\n",iRet);
}
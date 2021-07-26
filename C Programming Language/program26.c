// Accept a Number from user & return its reverse number
// Input : 7521
// Output : 1257

// Input : 4502
// Output : 2054

// Input : 5700
// Output : 75


#include<stdio.h>


int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;
    printf("Enter :");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse Number : %d",iRet);

    return 0;
}

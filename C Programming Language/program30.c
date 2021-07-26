// Accept a Number from user & Find Its Largest Digit
// Version TWO
//Reduce Time Complexity

// Input : 7521
// Output : 7

// Input : 121
// Output : 2

// Input : 750579
// Output : 9

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0, iMax = 0;
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
            if(iMax == 9)
            {
                break;
            }
        }
        iNo = iNo / 10;
    }
    return iMax;

    
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter :");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Largest Digit : %d",iRet);
    

    return 0;
}

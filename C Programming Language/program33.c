// Accept a Number from user & Find Its Smallest Digit

// Input : 7521
// Output : 1

// Input : 121
// Output : 1

// Input : 750579
// Output : 0

#include<stdio.h>

int MinDigit(unsigned long int iNo)             //unsigned long int is 8 Byte 
{
    int iDigit = 0, iMin = 9;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
            if(iMin == 0)
            {
                break;
            }
        }
        iNo = iNo / 10;
    }
    return iMin;

    
}

int main()
{
    unsigned long int iValue = 0,iRet = 0;
    printf("Enter :");
    scanf("%lu",&iValue);

    iRet = MinDigit(iValue);

    printf("Smallest Digit : %lu",iRet);
    

    return 0;
}

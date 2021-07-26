// Accept Number from user in Decimal & Convert it in Binary Fromat & Display it on scre  en
#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        iNo = iNo / 2;
    }
    printf("\n");
}

int main()
{
/*
    In case of Unsigned int  all 32 Bits are Usable while
    In case of Signed int only 31 Bits are Usable
    
    & one Bit used to give sign to number       POSITIVE = 0    NEGATIVE = 1

*/
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    
    return 0;
}























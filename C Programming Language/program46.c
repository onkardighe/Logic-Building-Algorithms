// Accept a number from user & print the pattern
// Input : 5
// Output : 1   *   2   *   3   *   4   *   5   *


#include<stdio.h>

void Pattern(unsigned int iNo)
{
    for(int iCount = 1; iCount<=iNo; iCount++)
    {
        printf("%d\t*\t",iCount); 
    }
    
}

int main()
{
    unsigned int iValue = 0;        //Unsigned int Number never be Negative

    printf("Enter Number :");
    scanf("%u",&iValue);


    Pattern(iValue);
    return 0;
}

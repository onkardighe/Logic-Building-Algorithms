// Accept a number from user & print the pattern
// Input : 5
// Output : *   5   *   4   *   3   *   2   *   1   
 

#include<stdio.h>

void Pattern(unsigned int iNo)
{
    for(int iCount = iNo; iCount>=1; iCount--)
    {
        printf("*\t%d\t",iCount); 
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

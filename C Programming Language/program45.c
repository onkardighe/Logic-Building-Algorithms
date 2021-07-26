// Accept a number from user & print the pattern
// Input : 5
// Output : *   #   *   #   *   #   *   #   *   #
// Input : 9
// Output : *   #   *   #   *   #   *   #   *   #   *   #   *   #   *   #   *   #

#include<stdio.h>

void Pattern(unsigned int iNo)
{
    for(int iCount = 1; iCount<=iNo; iCount++)
    {
        printf("*\t#\t"); 
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

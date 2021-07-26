// Accept a number from user & print the pattern
// Input : 5    
// Output : A   B   C   D   E
// Input : 3    
// Output : A   B   C

#include<stdio.h>

void Pattern(unsigned int iNo)
{
    char ch = 'A';
    for(int iCnt  = 1; iCnt <= iNo; iCnt++)     //we can add here alse (    ;   ;   ,ch++)
    {
        printf("%c\t",ch++);
        
    }
}

int main()
{
    unsigned int iValue = 0;        //Unsigned int Number never be Negative
    char cValue = '\0';
    printf("Enter Number :");
    scanf("%u",&iValue);


    Pattern(iValue);
    return 0;
}

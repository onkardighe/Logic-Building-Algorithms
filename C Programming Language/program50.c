// Accept a number from user & print the pattern
// Input : 5    
// Output : A   B   C   D   E
// Input : 3    
// Output : A   B   C

#include<stdio.h>

void Pattern(unsigned int iNo)
{
    char ch = '\0';
    for(int iCnt  = 1,ch='A'; iCnt <= iNo; iCnt++,ch++)     
    {
        printf("%c\t",ch);
        
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

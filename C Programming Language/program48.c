// Accept a number from user & print the pattern
// Input : 5    A
// Output :  A  A   A   A   A
// Input : 3    F
// Output : F   F   F 

#include<stdio.h>

void Pattern(unsigned int iNo, char ch)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
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

    printf("Enter Character :");
    scanf(" %c",&cValue);           //Flush Buffer (The Space)


    Pattern(iValue,cValue);
    return 0;
}

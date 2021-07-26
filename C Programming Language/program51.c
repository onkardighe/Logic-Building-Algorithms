// Accept a number from user & print the pattern
// Input : 4    3   
// Output :
/*
    *   *   *
    *   *   *
    *   *   *
    *   *   *
*/ 

#include<stdio.h>

void Pattern(unsigned int iRow,unsigned int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j<= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}

int main()
{
    unsigned int iValue1 = 0,iValue2 = 0;        

    printf("Enter Rows :");
    scanf("%u",&iValue1);

    printf("Enter Columns :");
    scanf("%u",&iValue2);


    Pattern(iValue1,iValue2);
    return 0;
}


// Accept a number from user & print the pattern
// Input : 4    4 
// Output :
/*
    1   *   *   *
    *   2   *   *
    *   *   3   *
    *   *   *   4
*/ 

#include<stdio.h>

void Pattern(unsigned int iRow,unsigned int iCol)
{
    if(iRow != iCol)
    {
        return;
    }
    for(int i = 1; i<= iRow; i++)
    {
        for(int j = 1; j<=iCol ; j++)
        {
            if(i == j)
            {
                printf("%d\t",i);
            }
            else
            {
                printf("*\t");
            }
            
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

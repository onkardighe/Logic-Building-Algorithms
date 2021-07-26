//Accept a number from user & give factors in Descending Order
// Input : 12
// Output : 6   4   3   2   1


#include<stdio.h>

void Factors(int iNo)             
{
    int iCount = 0;

    if(iNo < 0)
    {iNo = -iNo;}

    for(iCount = iNo / 2; iCount >=1; iCount--)
    {
        if((iNo % iCount)==0)
        {
            printf("%d\t",iCount);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    Factors(iValue);
 
    return 0;
}

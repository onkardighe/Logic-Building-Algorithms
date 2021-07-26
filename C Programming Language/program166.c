// Accept number from user & Display its Factors
// using Recursion & Iteration

#include <stdio.h>

void DisplayFactor(int iNo)
{
    static int iCnt = 1;

    if (iNo <= 1)
    {
        return;
    }

    while (iCnt <= iNo / 2)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
        iCnt++;
    }
}

void DisplayFactorR(int iNo)
{
    static int iCnt = 1;
    if (iCnt <= iNo / 2)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
        iCnt++;
        DisplayFactorR(iNo);
    }
}

int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayFactorR(iValue);

    return 0;
}
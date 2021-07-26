// Accept a number from user & Chech wheter its perfect or NOT
// using Recursion & Iteration

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfectI(int iNo)
{
    int iSum = 0, iCnt = 1;

    while(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CheckPerfectR(int iNo)
{
    static int iSum = 0;
    static int iCnt = 1;
    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfectR(iNo);
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter Number :" );
    scanf("%d",&iValue);

    bRet = CheckPerfectI(iValue);
    if(bRet == true)
    {
        printf("It is Perfect !\n");
    }
    else
    {
        printf("It is not perfect !!\n");
    }
    return 0;
}
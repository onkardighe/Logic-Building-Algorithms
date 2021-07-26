// Assignment Question


#include<stdio.h>
#define INVALID -1

int RangeSum(unsigned int iStart,unsigned int iEnd)
{
    int iSum = 0;
    if(iStart >= iEnd)
    {
        return INVALID;
    }
    for(int iCnt = iStart; iStart <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
    
}

int main()
{
    unsigned int iValue1 = 0,iValue2 = 0;       
    int iRet = 0;  
    printf("Enter Starting Index :");
    scanf("%u",&iValue1);

    printf("Enter End Index :");
    scanf("%u",&iValue2);


    iRet =  RangeSum(iValue1,iValue2);
    if(iRet == INVALID)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is : %d",iRet);
    }
    return 0;
}

//Accept a Number from user and check whether it is perfect or not
//Input  : 6
//Output : True     (6) 1+2+3
//Input  : 12
//Output : false     (16) 1+2+3+4+6


#include<stdio.h>
#include<stdbool.h>

bool ChechPerfect(int iNo)
{
    int icount = 0, isum = 0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(icount = 1; icount<= iNo/2; icount++)
    {
        if(iNo % icount == 0)
        {
            isum = isum + icount;
        }
    }
    if(isum == iNo)
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
    bool bRet = 0;

    printf("Entr Number :");
    scanf("%d",&iValue);

    bRet = ChechPerfect(iValue);
    
    
    if(bRet==true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);

    }

    return 0;
}

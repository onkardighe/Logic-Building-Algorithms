//Accept Number from user & display its Factor Numbers By (N/2) TIME COMPLEXITY
//Input  : 6
//Output : 1 2 3 

#include<stdio.h>

void Factors(int iNo)
{
    if(iNo == 0)
    {
        iNo = -iNo;
    }
    for(int count = 1; count<=(iNo/2); count++)
    {
        if(iNo%count == 0)
        {
            printf("%d ",count);
        }
    } 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Factors(iValue);

    return 0;
}

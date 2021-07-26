// Input : 89451
// Output : 8   (9-1)
// Input : 5672
// Output : 5   (7-2)
// Input : 2222
// Output : 2   (2-2)








#include<stdio.h>

int MaxMin(int iNo)             
{
    int iDigit = 0, iMax = 0, iMin = 9;

    if(iNo < 0)
    {iNo = -iNo;}

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return  iMax - iMin;

    
}

int main()
{
    int iValue = 0, iRes = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    iRes = MaxMin(iValue);

    printf("%d",iRes);
 
    return 0;
}

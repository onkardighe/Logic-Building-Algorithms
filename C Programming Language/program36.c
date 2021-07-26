// Accept two Numbers from user & Calculate occuracnce of Second  Number in First Number.
// Input :  19912299    9
// Output : 4



#include<stdio.h>

int Frequency(int iNo, int i)             
{
    int iCount = 0, iDigit = 0;

    if (i > 9)
    {return 0;}

    if(iNo < 0)
    {iNo = -iNo;}

    while(iNo > 0 )
    {
        iDigit = iNo % 10;

        if(iDigit == i)
        {
            iCount ++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2= 0,iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue1);

    printf("Enter Digit:");
    scanf("%d",&iValue2);

    iRet = Frequency(iValue1, iValue2);
    printf("Frequency is : %d\n",iRet);
    return 0;
}

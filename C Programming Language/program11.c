//Accept Two Numbers form user & Calculate It's power

//Input : 2 4
//Output : 2*2*2*2

//Input : 4 3
//Output : 4*4*4

#include<stdio.h>


int Power(int iNo1, int iNo2)
{
    int iCount = 0, iMult = 1;
    if(iNo1<0)
    {iNo1 = -iNo1;}
    if(iNo2<0)
    {iNo2 = -iNo2;}
    for (int iCount = 1; iCount <= iNo2; iCount++)
    {
        iMult = iMult * iNo1;

    }
    return iMult;
    

}

int main()
{
    
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number :");
    scanf("%d",&iValue1);
    printf("Enter Second Number :");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Result is : %d",iRet);



    

    return 0;
}

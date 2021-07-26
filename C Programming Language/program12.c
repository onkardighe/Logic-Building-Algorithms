//Accept number from user & result it's Factorial

//Input     : 5
//Output    : 120 : (5*4*3*2*1)

//Input     : 4
//Output    : 24 : (4*3*2*1)

#include<stdio.h>

int Fact(int iNo)
{

    int ifact = 1;
    if (iNo<0)
    {iNo = -iNo;}
    
    for (int icount=iNo; icount>=1; icount--)
    {
        ifact = icount * ifact;
    }
    
    return ifact;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d\n", iRet);

    return 0;
}

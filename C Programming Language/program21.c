//Accept number from user & display the Addition of that digits of that numbers 
//PROGAM VERSION 2      (Without using iDigit)
//Input : 7521
//output : 15       (7+5+2+1)


#include<stdio.h>

void sumDigits(int iNo)
{
    int iSum=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iSum = iSum + (iNo%10);
        iNo = iNo/10;

    }
    printf("%d",iSum);
    
}



int main()
{
    
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    sumDigits(iValue);
    return 0;
}


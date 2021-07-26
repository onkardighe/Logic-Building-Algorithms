//Accept number from user & display the Addition of that digits of that numbers 
//Input : 7521
//output : 15       (7+5+2+1)


#include<stdio.h>

void sumDigits(int iNo)
{
    int iDigit = 0, iSum=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
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


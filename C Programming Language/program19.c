//Accept number from user & display the digits of that numbers seaprately
//Input : 7521
//output : 
// 1
// 2
// 5
// 7

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo!=0)
    {
        iDigit = iNo % 10;
        printf("%d\nz",iDigit);
        iNo = iNo / 10;
    }
    
}



int main()
{
    
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    return 0;
}


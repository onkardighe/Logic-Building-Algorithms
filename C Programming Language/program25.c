// Accept Number from user and return multiplication of digits
// Input : 7521
// Output : 70

// Input : 4502
// Output : 40


#include<stdio.h>


int multDigit(int iNo)
{
    int iDigit = 0, iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
        
    }
    return iMult;    

    
}



int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;
    printf("Enter :");
    scanf("%d",&iValue);

    iRet = multDigit(iValue);
    printf("Multiplication of Digits : %d",iRet);

    return 0;
}

// Accept a Number from user & Check whether it is PALLINDROME or NOT


// Input : 7521
// Output : False

// Input : 121
// Output : True

// Input : 75057
// Output : true

#include<stdio.h>
#include<stdbool.h>
bool Pallindrome(int iNo)
{
    int iDigit = 0, iRev = 0, iTemp = 0;
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev*10) + iDigit;
        iNo = iNo / 10;
    }

    if(iTemp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }   
}

int main(int argc, char const *argv[])
{
    int iValue = 0;
    bool bRet;
    printf("Enter :");
    scanf("%d",&iValue);

    bRet = Pallindrome(iValue);
    if(bRet == true)
    {
        printf("%d is Pallindrome Number\n",iValue);
    }
    else
    {
        printf("%d is NOT Pallindrome Number",iValue);
    }

    return 0;
}

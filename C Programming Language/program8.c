//Accept Two Numbers from user and check whether that First number is divisible Second Number
//Input : 15  5
//Output : True

// Input : 21  6
//Output : False

#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int no1, int no2)
{
    if(no1%no2==0)
    {
        return true;
    }
    else
    {
        return false;
    }


}   

int main()
{
    int ivalue1 = 0, ivalue2=0 ;
    bool bRet =  false;
    printf("Enter First Number:");
    scanf("%d",&ivalue1);
    printf("Enter Second Number:");
    scanf("%d",&ivalue2);

    bRet = CheckDivisible(ivalue1, ivalue2);      //CheckDivisible(15,5)
    if(bRet == true)
    {
        printf("%d is divisible by %d",ivalue1,ivalue2);
    }
    else
    {
        printf("%d is Not divisible by %d",ivalue1,ivalue2);
    
    }
    return 0;
}
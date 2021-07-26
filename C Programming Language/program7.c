//Accept number from user and check whether that number is divisible by 3 and 5
//Input : 10
//Output : No

// Input : 15
//Output : Yes

#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int no)
{
    if(((no % 3)==0 && (no % 5)==0))
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
    int ivalue = 0;
    bool bRet =  false;
    printf("Enter Number:");
    scanf("%d",&ivalue);

    bRet = CheckDivisible(ivalue);      //CheckDivisible(15)
    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5 \n",ivalue);
    }
    else
    {
        printf("%d is not divisible by 3 and 5 \n",ivalue);
    
    }
    return 0;
}
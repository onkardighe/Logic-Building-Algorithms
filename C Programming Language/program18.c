//Accept a number from user & check whether it is prime or not
//Input : 7
//Output :
//Input : 7
//Output :



// #include<stdio.h>
// #include<stdbool.h>

// bool CheckPrime(int iNo)
// {
//     int icount = 0;
//     if(iNo < 0)
//     {
//         iNo = - iNo;
//     }

//     for(icount = 2; icount<= iNo/2; icount++)
//     {
//         if((iNo%icount) == 0)
//         {
//             break;
//         }
        
//         if(icount == (iNo/2)+1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
    
// }

// int main()
// {
//     int iValue = 0;
//     bool bRet;

//     printf("Entr Number :");
//     scanf("%d",&iValue);

//     bRet = CheckPrime(iValue);
   
    
//     if(bRet==true)
//     {
//         printf("%d is prime Number\n",iValue);

//     }
//     else
//     {
//         printf("%d is not a Prime number\n",iValue);

//     }

//     return 0;
// }

// ***************************************************************************************************************************

# include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    //          1               2                  3
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)       // 4
        {
            break;
        }
    }
    if(iCnt == (iNo/2)+1)
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
    int iValue = 0;
    bool bRet;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}
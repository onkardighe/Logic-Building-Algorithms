// Accept a string from user & Display its Length
// using Recursion & Iteration

#include <stdio.h>

int StrLenI(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int StrLenR(char str[])
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrLenR(str);
    }
    return iCnt;
}

int main()
{
    
    char arr[30] = {'\0'};
    int iRet = 0;
    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    iRet = StrLenR(arr);
    printf("String Length is : %d \n",iRet);

    return 0;
}
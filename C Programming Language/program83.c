#include<stdio.h>

int Count(char str[])
{
    int iCnt = 0;
    if(str == NULL)
    {
        return 0;
    }
    while(*str != 0)
    {
        if((*str == 'A') || (*str == 'a'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[10];
    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);
    printf("Count of A or a is : %d\n",iRet);

    return 0;
}


//  Accept a string from user & Find Frequency of 'a' in it.

#include<stdio.h>

int Count(char Str[])
{
    if(Str == NULL)
    {
        return 0;
    }
    int iCnt = 0;
    while(*Str != 0)
    {
        if(*Str == 'a')
        {
            iCnt++;
        }
        Str++;
    }
    return iCnt;


}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);
    printf("Frequency of a is : %d\n",iRet);
    return 0;
}

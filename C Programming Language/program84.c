//Accept string from user & Display Count  of Capital Characters from it

#include<stdio.h>
int CountCap(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCap(Arr);
    printf("Frequency of Capitals : %d\n",iRet);
}
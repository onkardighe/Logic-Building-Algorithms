// Accept s String from user & Count White Spaces from that String

#include<stdio.h>
int CountSmall(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSmall(Arr);
    printf("Frequency of White Spaces : %d\n",iRet);
}
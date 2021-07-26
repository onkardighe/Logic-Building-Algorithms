//Accept string from user & Display Count Small of Small Characters from it

#include<stdio.h>
int CountSmall(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    printf("Frequency of Small Letters : %d\n",iRet);
}
// Accept a string  from user & Display its Length

#include <stdio.h>

int strLenX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);
    // fgets(Arr, 10, stdin);       // Hello

    iRet = strLenX(Arr);
    printf("String Length is : %d\n",iRet);

    return 0;
}

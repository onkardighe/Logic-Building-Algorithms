// Accept s String from user & Reverse the string
// using While Loop

#include<stdio.h>

void Display(char str[])
{
    int  iCnt = 0;
    if(str == NULL)
    {
        return;
    }
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    str--;
    while(iCnt > 0)
    {
        printf("%c",*str--);
        iCnt--;
    }
}

int main()
{
    char arr[10];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    Display(arr);
    printf("\nOriginal String : %s",arr);     //Print Original String


    return 0;
}

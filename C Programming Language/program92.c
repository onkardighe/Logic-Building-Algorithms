// Accept s String from user & Reverse the string
// using For LOOP

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
    for(str --; iCnt > 0; iCnt--,str--)
    {
        printf("%c",*str);
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

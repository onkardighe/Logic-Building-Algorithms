

#include <stdio.h>

void Display(char str[])
{
    int iCnt= 0;
    printf("Characters from string are :\n");
    for(int iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}

int main()
{
    char Arr[10];

    printf("Enter your Name :");
    fgets(Arr, 40, stdin);      //Hello

    Display(Arr);
    return 0;
}

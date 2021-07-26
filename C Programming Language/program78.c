/*

1.  Create static character array in main function
2.  Accept thstring into that array
3.  Pass thst string to the function
4. function will perform operation on the string

*/

#include <stdio.h>

void Display(char str[])
{
    printf("Characters from string are :\n");
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[40];

    printf("Enter your Name :");
    fgets(Arr, 40, stdin);      //Hello

    Display(Arr);
    return 0;
}

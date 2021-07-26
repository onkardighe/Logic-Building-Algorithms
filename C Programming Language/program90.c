// Accept s String from user & Toggle the case of string

#include<stdio.h>

void strtoggleX(char str[])
{
    if(str == NULL)
    {
        return;
    }
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - ('a'-'A');
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a'-'A');
        }
        str++;    
    }
}

int main()
{
    char arr[10];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    strtoggleX(arr);
    printf("Updated String is : %s\n",arr);

    return 0;
}

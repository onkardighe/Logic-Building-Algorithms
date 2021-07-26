// Accept s String from user & Convert its case to Lowercase

#include<stdio.h>

void strlwrX(char str[])
{
    if(str == NULL)
    {
        return;
    }
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        
        str++;
        
    }
}

int main()
{
    char arr[10];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);
    printf("Updated String is : %s\n",arr);

    return 0;
}

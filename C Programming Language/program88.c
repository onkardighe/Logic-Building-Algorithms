// Accept s String from user & Convert its case to Uppercase

#include<stdio.h>

void struprX(char str[])
{
    if(str == NULL)
    {
        return;
    }
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;    
    }
}

int main()
{
    char arr[10];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    struprX(arr);
    printf("Updated String is : %s\n",arr);

    return 0;
}

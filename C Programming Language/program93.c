// Accept a string from user & Reverse it Physically
// Reverse original String 



#include<stdio.h>

void Reverse(char str[])
{
    char *start = NULL, *end = NULL;
    char temp;

    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;      //105

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }


}

int main()
{
    char arr[10];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    printf("Reversed String is :%s\n",arr);

    return 0;
}

#include<stdio.h>

void strcatX(const char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;
    while(*src!= '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[50];
    char brr[50];
    
    printf("Enter first string\n");
    scanf("%[^'\n']s",arr);   //     Demo
    printf("Enter second string\n");    // Hello
    scanf(" %[^'\n']s",brr);
//         ^ Space required
    strcatX(arr,brr);
    printf("After concat strinng is : %s\n",brr); // HelloDemo
    
    return 0;
}

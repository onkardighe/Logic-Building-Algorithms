/*

1.  Create static character array in main function
2.  Accept thstring into that array
3.  Pass thst string to the function
4. function will perform operation on the string

*/


#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter your Name :");
    scanf("%[^'\n']s",Arr);
    // fgets(Arr, 40,stdin);       //fgets(kashaat, kiti, kuthun)
    // gets(Arr);
    // scanf("%s",Arr);


    printf("Your Nmae is : %s\n",Arr);
    return 0;
}



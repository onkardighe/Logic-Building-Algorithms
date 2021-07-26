#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);
        // DisplayR(iNo-1);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("End of Main !\n");
    return 0;
}
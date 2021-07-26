//Accept Any Number And Display Table of that Number
//Input : 4
//Output : 5 10 15 20 25 30 35 40 45 50

//Input : 5
//Output : 5 10 15 20 25 30 35 40 45 50

/* 
Common  : 5*______
Start   : 1
Stop    : 10
Displayment : 1

*/


#include<stdio.h>



void DisplayTable(int no)
{
    if((no<=0))
    {
        printf("Invalid Number\n");
        return;
    }

    for(int i=1; i<=10; i++)
    {
        printf("%d\n",no*i);
        
    }
}   

int main()
{
    int ivalue = 0;
   
    printf("Enter Number:");
    scanf("%d",&ivalue);

    DisplayTable(ivalue);      //DisplayTable(4)
    
    return 0;
}
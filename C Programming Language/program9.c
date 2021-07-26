
//Accept Marks From user & dispaly the result like
/*
0  to 35    Fail
36 to 50    Pass Class 
51 to 60    Second Class
61 to 70    First Class 
70 to 100   Distinction
*/
#include<stdio.h>
#include<stdbool.h>


void CheckResult(int iMarks)
{
    if((iMarks < 0) || (iMarks > 100))      //Input Filter
    {
        printf("Invalid Marks\n");
        return;
    }
    if (iMarks >0 && iMarks<=35)
    {
        printf("Fail");
    }
    else if(iMarks>=36 && iMarks<=50)
    {
       printf("Pass Class"); 
    }
    else if(iMarks>=51 && iMarks<=60)
    {
        printf("Second Class");
    }
    else if(iMarks>=61 && iMarks <= 70)
    {
        printf("First Class");
    }
    else 
    {
        printf("Distinction");
    }
}   

int main()
{
    int iValue = 0;
    printf("Enter Your Marks :");
    scanf("%d",&iValue);

    CheckResult(iValue);
    
    return 0;
}
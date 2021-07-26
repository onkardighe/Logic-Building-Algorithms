// Recursion without using Looping
// Complete recursion

/*
iRow = 4
iCol = 3

*   *   *   
*   *   *   
*   *   *  
*   *   *  

*/


#include<stdio.h>

void Display(int iCol)          // Display / Travel Columns
{
    static int j = 1;
    if(j <= iCol)
    {
        printf("*\t");
        j++;
        Display(iCol);          // Recursive Call
    }
    j = 1; 
}
void DisplayR(int iRow, int iCol) // Dsiplay / Travel Rows
{
    static int i = 1;
    if(i <= iRow)
    {
        Display(iCol);          // Call to Travel Columns
        i++;
        printf("\n");
        DisplayR(iRow, iCol);   // Rrecursive call
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);

    DisplayR(iValue1,iValue2);
    return 0;

}
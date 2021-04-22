/*

5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :


void DisplayLarge( PNODE Head);

Input linked list : |11|->|250|->|532|->|419|

Output : 1 5 5 9

*/


#define TRUE 1
#define FALSE 0

typedef int BOOL;

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = iNo;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head =newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d -> ",Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

void DisplayLarge(PNODE Head)
{
    int iDigit = 0,iData = 0, iMax = 0;
    while(Head != NULL)
    {
        iData = Head->Data;
        iMax = 0;

        while(iData != 0)
        {
            iDigit = iData % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iData = iData / 10;
        }
        printf("%d\t",iMax);
        Head = Head->Next;
    }
}


int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First,419);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);

    DisplayLarge(First);


    return 0;
}


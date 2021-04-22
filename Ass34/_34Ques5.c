/*

5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :

int SumDigit( PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640|

Output : 2 5 2 6 10

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

void SumDigit(PNODE Head)
{
    int iSum = 0;
    int iDigit = 0;
    while(Head != NULL)
    {
        iSum = 0;
        iDigit = 0;
        while(Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            iSum = iSum + iDigit;
            Head->Data  = Head->Data / 10;
        }
        printf("%d\t",iSum);
        Head = Head->Next;
    }
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    SumDigit(First);

    return 0;
}

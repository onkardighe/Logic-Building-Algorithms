/*

1. Write a program which reverse each element of singly linked list.
Function Prototype :

void Reverse( PNODE Head);

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|

Output : |11|->|82|->|71|->|14|->|6|->|98|

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



void Reverse(PNODE Head)
{
    int iDigit = 0,iData = 0;
    while(Head != NULL)
    {
        iData = Head->Data;
        Head->Data = 0;
        while(iData != 0)
        {
            iDigit = iData % 10;
            Head->Data = (Head->Data * 10) + iDigit;
            iData = iData / 10;
        }
        Head = Head->Next;
    }
}


int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    printf("Input Linked List : ");
    Display(First);

    Reverse(First);

    printf("\nAfter Reverse : ");
    Display(First);



    return 0;
}


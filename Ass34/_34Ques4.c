/*

4. Write a program which return second maximum element from singly linear
linked list.
Function Prototype :

int SecMaximum( PNODE Head);

Input linked list : |110|->|230|->|320|->|240|

Output : 240

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

int SecMaximum(PNODE Head)
{
    int iMaxFirst = 0, iMaxSec = 0;

    if(Head == NULL)
    {
        return -1;
    }
    else
    {
        while(Head != NULL)
        {
            if(Head->Data > iMaxFirst)
            {
                iMaxSec = iMaxFirst;
                iMaxFirst = Head->Data;
            }
            else if(Head->Data > iMaxSec)
            {
                iMaxSec = Head->Data;
            }
            Head = Head->Next;
        }
        return iMaxSec;
    }
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = SecMaximum(First);

    printf("Second Maximum Element is : %d ",iRet);

    return 0;
}

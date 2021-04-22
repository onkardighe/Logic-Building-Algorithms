/*

3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :

void DisplayProduct( PNODE Head);

Input linked list : |11|->|20|->|32|->|41|

Output : 1 2 6 4

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

void DisplayProduct(PNODE Head)
{
    int iDigit = 0, iData = 0, iProd = 0;
    if(Head == NULL)
    {
        return;
    }
    else
    {
        while(Head != 0)
        {   iData = Head->Data;
            iProd = 1;

            while(iData != 0)
            {
                iDigit = iData % 10;
                if(iDigit != 0)
                {
                    iProd = iProd * iDigit;
                }
                iData = iData / 10;
            }
            printf("%d\t",iProd);
            Head = Head->Next;
        }
    }

}


int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    DisplayProduct(First);
    Display(First);


    return 0;
}


/*

4. Write a program which return largest element from singly linear linked
list.
Function Prototype :


int Maximum( PNODE Head);

Input linked list : |110|->|230|->|320|->|240|

Output : 320

*/

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
    PNODE Newn = NULL;

    Newn = (PNODE)malloc(sizeof(NODE));

    Newn->Data = iNo;
    Newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = Newn;
    }
    else
    {
        Newn->Next = *Head;
        *Head = Newn;
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

int Maximum(PNODE Head)
{
    int iMax = 0;
    while(Head != NULL)
    {
        if((Head->Data) > iMax )
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
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

    iRet = Maximum(First);
    printf("Largest Element is : %d\n",iRet);



    return 0;
}

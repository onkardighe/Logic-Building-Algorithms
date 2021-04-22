/*

5. Write a program which return smallest element from singly linear linked
list.
Function Prototype :

int Minimum( PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640|

Output : 20

*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE Newn = NULL;

    Newn = (PNODE)malloc(sizeof(NODE));

    Newn->Data = iNo;
    Newn->Next = NULL;

    if (*Head == NULL)
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
    while (Head != NULL)
    {
        printf("%d -> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int Minimum(PNODE Head)
{
    int iMin = Head->Data;
    if (Head == NULL)
    {
        return -1;
    }
    else
    {
        while (Head != NULL)
        {
            if (Head->Data < iMin)
            {
                iMin = Head->Data;
            }
            Head = Head->Next;
        }
        return iMin;
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

    iRet = Minimum(First);
    printf("Smallest Element is : %d\n", iRet);

    return 0;
}

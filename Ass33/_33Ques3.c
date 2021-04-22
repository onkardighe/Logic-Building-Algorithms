/*


3. Write a program which returns addition of all element from singly linear
linked list.

Function Prototype :

int Addition( PNODE Head);

Input linked list : |10|->|20|->|30|->|40|

Output : 100

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
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = iNo;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
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

int Addition(PNODE Head)
{
    int iAdd = 0;
    while(Head != NULL)
    {
        iAdd = iAdd + Head->Data;
        Head = Head->Next;
    }
    return iAdd;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    iRet = Addition(First);
    printf("Addion of all Elements is : %d\n",iRet);

    return 0;
}

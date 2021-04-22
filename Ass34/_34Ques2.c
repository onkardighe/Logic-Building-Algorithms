/*

2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :

int DisplayPrime( PNODE Head);

Input linked list : |11|->|20|->|17|->|41|->|22|->|89|

Output : 11 17 41 89

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

void DisplayPrime(PNODE Head)
{
    int i = 0;
    while(Head != NULL)
    {
        for(i = 2; i < Head->Data; i++)
        {
            if(Head->Data % i == 0 )
            {
                break;
            }
        }
        if(Head->Data == i)
        {
            printf("%d\t",Head->Data);
        }
        Head = Head->Next;
    }

}


int main()
{
    PNODE First = NULL;
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    DisplayPrime(First);


    return 0;
}


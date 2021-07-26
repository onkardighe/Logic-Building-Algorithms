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

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));         //Typecasting Since malloc returns datatype void *
    newn->Data = No;
    newn->Next = NULL;

    if(*Head == NULL)               //LL is Empty
    {
        *Head = newn;
    }
    else                            // LL contains atleast one node
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;   

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->Data = No;
    newn ->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
}


void Dispaly(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->Next;
    }
    return iCnt;
}


void DeletFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)       // LL is Empty
    {
        return;
    }
    else if((*Head)->Next == NULL)           //If LL Contains Only One Node
    {
        free(*Head);    // Delet First Node
        *Head = NULL;      // Set NULL into First Pointer
    }
    else                                        // LL Contains More than One Node
    {
        (*Head) = (*Head)->Next;
        free(Temp);
    }
}
void DeletLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->Next  == NULL)           //If LL Contains Only One Node
    {
        free(*Head);            // Delet First Node
        *Head = NULL;           // Set NULL into First Pointer
    }
    else                                        // LL Contains More than One Node
    {
        while(((temp->Next)->Next) != NULL)
        {
            temp = temp ->Next;
        }
        free(temp->Next);
        temp->Next = NULL;
    }
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First,51);             // InsertFirst(60,51)
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    InsertLast(&First,111);

    Dispaly(First);                     // Display(100)
    
    DeletFirst(&First);
    printf("Nodes After DeletFirst :\n");
    Dispaly(First);

    DeletLast(&First);
    printf("Nodes After Delet Last :\n");
    Dispaly(First);
    
    return 0;
}

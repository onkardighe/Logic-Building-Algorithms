// Check whether a Singly Linked List contains self loop or NOT


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    PNODE temp = Head;
    while(temp != NULL)
    {
        printf("| %d | -> ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

bool CheckLoop(PNODE Head)
{
    PNODE temp = Head;
    while((temp != NULL) && (Head != NULL) && (temp->next != NULL))
    {
        temp = temp->next->next;
        Head = Head->next;
        if(Head == temp)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool bRet = 0;
    PNODE First = NULL;
    PNODE third  = NULL, last = NULL;
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);

    third  = First->next->next;
    last  = third->next->next;
    
    last->next = third;
    
    bRet = CheckLoop(First);
    if(bRet == true)
    {
        printf("Loop is present !\n");
    }
    else
    {
        printf("Loop is Absent !\n");
    }
    return 0;
}
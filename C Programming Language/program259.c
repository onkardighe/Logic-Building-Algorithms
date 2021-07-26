// Reverse a Linked List 

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

void Reverse(PPNODE Head)
{
    PNODE nxt = NULL, prev = NULL, current = *Head;
    if(*Head == NULL)
    {
        return;
    } 

    while(current != NULL)
    {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    *Head = prev;
}

int main()
{
    bool bRet = 0;
    PNODE First = NULL;
    PNODE third  = NULL, last = NULL;
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);

    // Function of Reverse
    Reverse(&First);
    Display(First);

    
    return 0;
}
// Create a function for SinglyLL 
//  Returns the middle value
// Time Complexity should less than O(n) 

#include<stdio.h>
#include<stdlib.h>

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

int MiddleElement(PNODE Head)
{
    PNODE temp = NULL;
    if(Head == NULL)
    {
        return -1;
    }
    temp = Head;
    while((temp != NULL) && (temp->next != NULL))
    {
        temp = temp->next->next;
        Head = Head->next;
    }
    return Head->data;
}

int main()
{
    int ret = 0;
    PNODE First = NULL;
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    ret = MiddleElement(First);
    
    printf("Middle elements is : %d",ret);
    return 0;
}
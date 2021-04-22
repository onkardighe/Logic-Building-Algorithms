/*

2. Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.

Function Prototype :

int SearchLastOcc( PNODE Head, int no );

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

Input element : 30

Output : 6

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

int SeacrhLastOcc(PNODE Head, int iNo)
{
    int iCnt = 0, iTemp = 0;
    while(Head != NULL)
    {
        iCnt++;
        if(Head->Data == iNo)
        {
            iTemp = iCnt;
        }
        Head = Head->Next;
    }
    return iTemp;
}

int main()
{
     int iValue = 0,iRet = 0;

    printf("Enter Element :");
    scanf("%d",&iValue);

    PNODE First = NULL;
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    iRet = SeacrhLastOcc(First,iValue);
    printf("Last Occurance of %d is at : %d\n",iValue,iRet);

    return 0;
}

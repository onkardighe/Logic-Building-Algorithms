#include<stdio.h>
#include<stdlib.h>


struct node
{
    int Data;
    struct node * Next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn ->Data = iNo;
    newn ->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn ->Next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	PNODE temp = *Head;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->Data = iNo;
	newn->Next = NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else if((*Head)->Next == NULL)
	{
		(*Head)->Next = newn;
	}
	else
	{
		while((temp->Next) != NULL)
		{
			temp = temp->Next;
		}
		temp->Next = newn;
	}
}

void DeletFirst(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->Next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		(*Head) = (*Head)->Next;
		free(temp);
		temp = NULL;
	}
}

void Display(PNODE Head)
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
		Head = Head ->Next;
	}
	return iCnt;

}

int main()
{
	int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First,51);             // InsertFirst(60,51)
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    InsertLast(&First,111);

    Display(First);                     // Display(100)
    
    DeletFirst(&First);
    printf("Nodes After  1 DeletFirst :\n");
    Display(First);

	DeletFirst(&First);
    printf("Nodes After  2 DeletFirst :\n");
    Display(First);

	DeletFirst(&First);
    printf("Nodes After  3 DeletFirst :\n");
    Display(First);

	DeletFirst(&First);
    printf("Nodes After  4 DeletFirst :\n");
    Display(First);
	
	DeletFirst(&First);
    printf("Nodes After  5 DeletFirst :\n");
    Display(First);

	



    
    return 0;
}

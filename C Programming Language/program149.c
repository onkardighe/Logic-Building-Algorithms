// Duplicate of previous program 
// Just added DeleteAtPos() Function

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *Next;
    struct node *Prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->Next = NULL;
    newn->Prev = NULL;
    
    if(*Head == NULL)               // LL is Empty
    {
        *Head = newn;
    }
    else                            // LL conains at least one Element
    {
        newn->Next = *Head;
        (*Head)->Prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->Next = NULL;
    newn->Prev = NULL;
    
    if(*Head == NULL)               // LL is Empty
    {
        *Head = newn;
    }
    else                            // LL conains at least one Element
    {
        while(Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }
        Temp->Next = newn;
        newn->Prev = Temp;
        
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| <=> ",Head->data);
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

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)                   // LL is Empty
    {
        return;
    }
    else if((*Head)->Next == NULL)      // Single Node
    {
        free(*Head);
        *Head = NULL;
    }
    else                                // More than one Node
    {
        *Head = (*Head)->Next;
        free((*Head)->Prev);
        (*Head)->Prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
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
        while(Temp->Next->Next != NULL)
        {
            Temp = Temp->Next;
        }
        free(Temp->Next);
        Temp->Next = NULL;
    }

}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int iSize = 0;
    iSize = Count(*Head);
    PNODE newn = NULL;
    PNODE Temp = *Head;

    //Filter
    if((iPos < 1) || (iPos > iSize+1))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head,no);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->Next = NULL;
        newn->Prev = NULL;

        for(int i = 1; i < (iPos-1); i++)
        {
            Temp = Temp->Next;
        }
        newn->Next = Temp->Next;
        Temp->Next->Prev = newn;
        Temp->Next = newn;
        newn->Prev = Temp;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iSize = 0;
    PNODE Temp = *Head;

    iSize = Count(*Head);

    // Filter
    if((iPos < 1) || (iPos > iSize))
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        for(int i = 1; i < (iPos-1); i++)
        {
            Temp = Temp->Next;
        }
        Temp->Next = Temp->Next->Next;
        free(Temp->Next->Prev);
        Temp->Next->Prev = Temp;

    }

}

int main()
{
    PNODE First = NULL;
    int iOption = 1,iValue = 0, iRet = 0, iPos = 0;

    while(iOption != 0)
    {
        printf("\n------------------------------------------\n");
        printf("Please select the option :\n");
        printf("1. Insert node at First Position\n");
        printf("2. Insert node at Last Position\n");
        printf("3. Insert node at given position\n");
        printf("4. Delete First Node\n");
        printf("5. Delete Last Node\n");
        printf("6. Delete node at given Position\n");
        printf("7. Display the contents of linked list\n");
        printf("8. Count the Nodes in Linked List\n");
        printf("0. Exit the application\n");
        scanf("%d",&iOption);
        printf("------------------------------------------\n");
        
        switch(iOption)
        {
            case 1:
                printf("Enter Data to Insert :");
                scanf("%d",&iValue);
                InsertFirst(&First, iValue);
                break;
            
            case 2:
                printf("Enter Data to Insert :");
                scanf("%d",&iValue);
                InsertLast(&First, iValue);
                break;
        
            case 3:
                printf("Enter Data to Insert :");
                scanf("%d",&iValue);
                printf("Enter Position :");
                scanf("%d",&iPos);
                InsertAtPos(&First,iValue,iPos);
                break;
        
            case 4:
                DeleteFirst(&First);
                break;
        
            case 5:
                DeleteLast(&First);
                break;
        
            case 6:
                printf("Enter Position :");
                scanf("%d",&iPos);
                DeleteAtPos(&First,iPos);
                break;
        
            case 7:
                printf("Contents of Linked List are :\n");
                Display(First);
                break;
        
            case 8:
                printf("Number of Nodes are : ");
                iRet = Count(First);
                printf("%d",iRet);
                break;
        
            case 0:
                printf("THANK YOU FOR USING LINKED LIST APPLICATION !! \n");
                break;

            default:
                printf("Please Enter valid Option");
                break;

    }

    }


    
    
    return 0;
}       //End of Main
 
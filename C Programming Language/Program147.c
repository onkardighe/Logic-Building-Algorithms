#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
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

void InsertLast(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(Temp->Next != NULL )
        {
            Temp = Temp->Next;
        }
        Temp->Next = newn;
    }

}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
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
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> Next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->Next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> Next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while((Temp->Next)->Next != NULL)
        {
            Temp = Temp ->Next;
        }
        free(Temp->Next);
        Temp->Next = NULL;
    }
}

void InsertAtPosition(PPNODE Head, int No, int iPos)
{
    int iSize = 0;

    PNODE Temp = *Head;
    PNODE newn = NULL;

    iSize = Count(*Head);

    // Filter
    if((iPos < 1) || (iPos > iSize+1))      // Invalid Position
    {
        return;
    }

    if(iPos == 1)                       // First Position
    {
        InsertFirst(Head,No);
    }
    else if(iPos == iSize+1)              // Last Position   
    {
        InsertLast(Head,No);
    }
    else                                // In Between First & Last position
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->Next = NULL;
        for(int i = 1; i < (iPos-1); i++)
        {
            Temp = Temp->Next;
        } 
        newn->Next = Temp->Next;
        Temp->Next = newn;
    }
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iSize = 0;
    PNODE Temp = *Head;
    PNODE Target = NULL;

    iSize = Count(*Head);

    // Filter
    if((iPos < 1) || (iPos > iSize))      // Invalid Position
    {
        return;
    }

    if(iPos == 1)                       // First Position
    {
        DeleteFirst(Head);
    }
    else if(iPos == iSize)              // Last Position   
    {
        DeleteLast(Head);
    }
    else                                // In Between First & Last position
    {
        for(int i = 1; i < (iPos-1); i++)
        {
            Temp = Temp->Next;
        } 
        Target = Temp->Next;
        Temp->Next = Target->Next;
        free(Target);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0, iOption = 1, iValue = 0, iPos = 0;


    while(iOption != 0)
    {
        printf("\n_____________________________________________\n");
        printf("Enter Your Action on Linked List : \n");
        printf("1. Insert Node at First Position\n");
        printf("2. Insert Node at Last Position\n");
        printf("3. Insert Node at Given Position\n");
        printf("4. Delete First Node\n");
        printf("5. Delete Last Node\n");
        printf("6. Delet Node at Given Position\n");
        printf("7. Display Contents of Linked List\n");
        printf("8. Counrt Number of nodes in linked list\n");
        printf("0. Exit the Application\n");
        scanf("%d",&iOption);
        printf("\n_____________________________________________\n");

        
        switch(iOption)
        {
            case 1:
                printf("Enter Data to Insert :");
                scanf("%d",&iValue);
                InsertFirst(&First,iValue);
                break;

            case 2:
                printf("Enter Data to Insert :");
                scanf("%d",&iValue);
                InsertLast(&First,iValue);
                break;
            
            case 3:
                printf("Enter Data to Insert :");
                scanf("%d",&iValue);
                printf("Enter the Position : ");
                scanf(" %d",&iPos);
                InsertAtPosition(&First,iValue,iPos);
                break;
            
            case 4:
                DeleteFirst(&First);
                break;

            case 5:
                DeleteLast(&First);
                break;

            case 6:
                printf("Enter the Position : ");
                scanf("%d",&iPos);
                DeleteAtPosition(&First,iPos);
                break;                

            case 7:
                printf("Nodes in Linked List are : \n");
                Display(First);
                break;
                
            case 8:
                iRet =  Count(First);
                printf("Number of Nodes are : %d",iRet);
                break;
            
            case 0:
                printf("Thank You For using Linked List Application \n");
                break;
            default:
                printf("Please Enter Valid Option !");
                break;
        }
        //End Of Switch       
    }
    // End of While
    return 0;
}
//End of main


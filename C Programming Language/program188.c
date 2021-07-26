#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void InsertNode(PPNODE Head, int iNo)
{
    PNODE temp = *Head;

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)        // if Root NODE
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(iNo > temp->data)                // Data Motha
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)           // Data Lahan
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(iNo == temp->data)          // Data Same
            {
                printf("Duplicate Element\n");
                free(newn);
            }
        }
    }
}

void Inorder(PNODE Head)        // LDR
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);      // L
        printf("%d\t",Head->data);  // D
        Inorder(Head->rchild);      // R
    }
}

void Preorder(PNODE Head)       // DLR
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);  // D
        Preorder(Head->lchild);     // L
        Preorder(Head->rchild);     // R
    }
}

void Postorder(PNODE Head)      // LRD
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);    //L
        Postorder(Head->rchild);    //R
        printf("%d\t",Head->data);  //D
    }
}

int Count(PNODE Head)
{
    static int iCnt = 0;
    if(Head != NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int main()
{
    
    PNODE Root = NULL;
    int iChoice  = 1, iNo = 0, iRet = 0;
    while(iChoice != 0)
    {
        printf("Enter Your Choice :\n");
        printf("1. Insert Node\n");
        printf("2. Display Inorder\n");
        printf("3. Display Preorder\n");
        printf("4. Display Postorder\n");
        printf("5. Count Nodes\n");
        printf("0. Terminate the application\n");
        scanf(" %d",&iChoice);

        switch (iChoice)
        {
        case 1:
            printf("Enter Number : ");
            scanf("%d",&iNo);
            InsertNode(&Root,iNo);
            break;
        case 2:
            printf("Inorder Traversal\n");
            Inorder(Root);
            printf("\n");
            break;

        case 3:
            printf("Preorder Traversal\n");
            Preorder(Root);
            printf("\n");
            break;

        case 4:
            printf("Postorder Traversal\n");
            Postorder(Root);
            printf("\n");
            break;

        case 5:
            iRet = Count(Root);
            printf("Number of Nodes are : %d\n",iRet);
            break;

        case 0:
            printf("Exited !!\n");
        
        default:
            printf("Please Enter Proper Choice !!\n");
            break;
        }
    }

    return 0;
}




// STD code of BST


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void Count(PNODE Head,int *p)
{
    if(Head != NULL)
    {
        (*p)++;
        Count(Head->lchild,p);
        Count(Head->rchild,p);
    }
}

void CountLeaf(PNODE Head,int *p)
{
    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head->rchild == NULL))
        {
            (*p)++;
        }
        CountLeaf(Head->lchild,p);
        CountLeaf(Head->rchild,p);
    }
}

void CountParent(PNODE Head,int *p)
{
    if(Head != NULL)
    {
        if((Head->lchild != NULL) || (Head->rchild != NULL))
        {
            (*p)++;
        }
        CountParent(Head->lchild,p);
        CountParent(Head->rchild,p);
    }
}

bool Search(PNODE Head, int iNo)
{
    if(Head != NULL)
    {
        if(iNo > Head->data)
        {
            return Search(Head->rchild, iNo);
        }
        else if(iNo < Head->data)
        {
            return Search(Head->lchild, iNo);
        }
        else if(iNo == Head->data)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}



int main()
{
    
    PNODE Root = NULL;
    int iChoice  = 1, iNo = 0, iRet = 0, i = 0;
    bool bRet = NULL;
    while(iChoice != 0)
    {
        printf("Enter Your Choice :\n");
        printf("1. Insert Node\n");
        printf("2. Display Inorder\n");
        printf("3. Display Preorder\n");
        printf("4. Display Postorder\n");
        printf("5. Count Nodes\n");
        printf("6. Count Leaf Nodes\n");
        printf("7. Count Parent Nodes\n");
        printf("8. Search Nodes\n");
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
            i = 0;
            Count(Root, &i);
            printf("Number of Nodes are : %d\n",i);
            i = 0;
            break;

        case 6:
            i = 0;
            CountLeaf(Root, &i);
            printf("Number of Leaf Nodes are : %d\n",i);
            i = 0;
            break;
        
        case 7:
            i = 0;
            CountParent(Root, &i);
            printf("Number of Parent Nodes are : %d\n",i);
            i = 0;
            break;

        case 8:
            printf("Enter Data to Search : ");
            scanf("%d",&iNo);
            bRet = Search(Root,iNo);
            if(bRet == true)
            {
                printf("%d Node is present in BST\n",iNo);
            }
            else 
            {
                printf("%d Node is Absent in BST", iNo);
            }
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




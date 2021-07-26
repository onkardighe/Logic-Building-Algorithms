#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE;

class SinglyCL
{
    private:
        int iSize;
        PNODE Head;
        PNODE Tail;
    public:
        SinglyCL()
        {
            iSize = 0;
            Head = NULL;
            Tail = NULL;
        }

        int Count()
        {
            return iSize;
        }

        void Display()
        {
            PNODE temp = Head;
            int i = 0;
            for(i = 1; i<= iSize; i++)
            {
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iNo;
            newn->next = NULL;

            if((Head == NULL) && (Tail == NULL))
            {
                Head = newn;
                Tail = newn;
            }
            else                                // LL contains at least one node
            {
                newn->next = Head;
                Head = newn;
            }
            iSize++;
            Tail->next = Head;
        }

        void InsertLast(int iNo)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iNo;
            newn->next = NULL;

            if((Head == NULL) && (Tail == NULL))            // LL is Empty
            {
                Head = newn;
                Tail = newn;
            }
            else                                // LL contains at least one node
            {
                Tail->next = newn;
                Tail = Tail->next;
            }
            iSize++;
            Tail->next = Head;
        }

        void DeleteFirst()
        {
            if(iSize == 0)          // LL is  Empty
            {
                return;
            }
            else if(iSize == 1)     // LL contains single node
            {
                delete Head;
                Head = NULL;
                Tail = NULL;
                iSize--;
            }
            else
            {
                Head = Head->next;
                delete(Tail->next);
                Tail->next = Head;
                iSize--;
            }
        }

        void DeleteLast()
        {
            if(iSize == 0)          // LL is  Empty
            {
                return;
            }
            else if(iSize == 1)     // LL contains single node  if(Head == Tail)
            {
                delete Head;
                Head = NULL;
                Tail = NULL;
                iSize--;
            }
            else
            {
                PNODE temp = Head;
                int i = 0;
                while(temp->next != Tail)
                {
                    temp = temp->next;
                }

                // for(i = 1; i<(iSize-1); i++)
                // {
                //     temp = temp->next;
                // }
                delete Tail;
                Tail = temp;
                Tail->next = Head;
                iSize--;
            }
        }
};

int main()
{
    SinglyCL obj;
    int iChoice = 1, iRet = 0, iPos = 0, iValue = 0;
    
    while(iChoice != 0)
    {
        cout<<"Enter Your Choice :\n";
        cout<<"1. Insert node at First Position\n";
        cout<<"2. Insert Node at last position\n";
        cout<<"3. Insert node at given Position\n";
        cout<<"4. Delete First Node\n";
        cout<<"5. Delete Last node\n";
        cout<<"6. Delete node at given Position\n";
        cout<<"7. Display Contents of Linked List\n";
        cout<<"8. Count Number of nodes\n";
        cout<<"0. Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter Number to insert :";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;
            
            case 2:
                cout<<"Enter Number to insert :";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter Number to insert :";
                cin>>iValue;
                cout<<"Enter Position :";
                cin>>iPos;
                // obj.InsertAtPos(iValue,iPos);
                break;
        
            case 4:
                obj.DeleteFirst();
                break;
        
            case 5:
                obj.DeleteLast();
                break;
        
            case 6:
                cout<<"Enter Position :";
                cin>>iPos;
                // obj.DeleteAtPos(iPos);
        
            case 7:
                obj.Display();
                break;
        
            case 8:
                iRet = obj.Count();
                cout<<"Numer of Nodes are : "<<iRet<<"\n";
                break;
        
            case 0:
                cout<<"Thank You for using Linked List Application\n";
                break;
        
            default:
                cout<<"Invalid Choice !!\n";
        }   // End of Switch
    }   // End of While 
    return 0;
}   // End of Main

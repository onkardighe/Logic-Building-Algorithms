#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *Next;
}NODE, *PNODE;

class SinglyLL
{
    private:
        PNODE Head;
        int iSize;

    public:
        // Default Constructor
        SinglyLL()
        {
            Head = NULL;
            iSize = 0;
        }

        int Count()
        {
            return iSize;
        }

        void Display()
        {
            PNODE Temp = Head;
            while(Temp != NULL)
            {
                cout<<Temp->data<<" -> ";
                Temp = Temp->Next;
            }
            cout<<"NULL\n";
        }

        void InsertFirst(int iValue)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iValue;
            newn->Next = NULL;
            
            if(Head == NULL)            // LL is empty
            {
                Head = newn;
            }
            else                        // LL contains at least one node
            {
                newn->Next = Head;
                Head = newn;
            }
            iSize++;

        }

        void InsertLast(int iValue)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iValue;
            newn->Next = NULL;

            PNODE Temp = Head;
            
            if(Head == NULL)            // LL is empty
            {
                Head = newn;
            }
            else                        // LL contains at least one node
            {
                while(Temp->Next != NULL)
                {
                    Temp = Temp->Next;
                }
                Temp->Next = newn;
            }
            iSize++;
        }

        void DeleteFirst()
        {
            if(Head == NULL)
            {
                return;
            }
            else
            {
                PNODE Temp = Head;
                Head = Head->Next;
                delete(Temp);
                iSize--;
            }
        }

        void DeleteLast()
        {
            if(Head == NULL)
            {
                return;
            }
            else if (Head->Next == NULL)
            {
                delete(Head);
                Head = NULL;
                iSize--;
            }
            else
            {
                PNODE Temp = Head;
                while(Temp->Next->Next != NULL)
                {
                    Temp = Temp->Next;
                }
                delete(Temp->Next);
                Temp->Next = NULL;
                iSize--;
            }
        }


};

int main()
{
    int iChoice = 1, iNo = 0;

    SinglyLL obj1;


    while(iChoice != 0)
    {
        cout<<"----------------------------------------\n";
        cout<<"Enter Your Choice : \n";
        cout<<"1. Insert At First Position"<<"\n";
        cout<<"2. Insert At Last Position"<<"\n";
        cout<<"3. Insert At given Position"<<"\n";
        cout<<"4. Delete First Node"<<"\n";
        cout<<"5. Delete Last Node"<<"\n";
        cout<<"6. Delete node at given position"<<"\n";
        cout<<"7. Display the contents "<<"\n";
        cout<<"8. Count the number of nodes "<<"\n";
        cout<<"0. Exit the application"<<"\n";
        cin>>iChoice;
        cout<<"----------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter Number : ";
                cin>>iNo;
                obj1.InsertFirst(iNo);
                break;
                
            case 2:
                cout<<"Enter Number : ";
                cin>>iNo;
                obj1.InsertLast(iNo);
                break;

            case 3:
                break;
                
            case 4:
                obj1.DeleteFirst();
                break;

            case 5:
                obj1.DeleteLast();
                break;

            case 6:
                break;

            case 7:
                obj1.Display();
                break;

            case 8:
                iNo = obj1.Count();
                cout<<"Number of nodes are : "<<iNo<<"\n";
                break;

            case 0:
                cout<<"Thank You For using Linked List Application !"<<"\n";
                break;

            default:
                cout<<"Inalid Choice !!\n";

        }

    }
    
    return 0;
}

// QUUEUE using Linked List

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * Next;
}NODE, *PNODE;

class  Queue
{
    private:
        PNODE Head;
        int iSize;
    
    public:
        Queue();
        ~Queue();
        int Count();
        void Display();
        void Enqueue(int);
        int Dequeue();
};

Queue::Queue()
{
    Head = NULL;
    iSize = 0;
}

Queue::~Queue()
{
    PNODE temp = NULL;

    while(Head != NULL)
    {
        temp = Head;
        Head = Head->Next;
        delete temp;
    }
}

void Queue::Display()
{
    PNODE temp = Head;
    cout<<"Elements in Queue : \n";
    while( temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->Next;
    }
    cout<<"\n";
}

int Queue::Count()
{
    return iSize;
}

void Queue::Enqueue(int iNo)
{
    PNODE temp = Head;
    PNODE newn = new NODE;
    newn->data = iNo;
    newn->Next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {   
            temp = temp->Next;
        }
        temp->Next = newn;
    }
    iSize++;
}

int Queue::Dequeue()
{
    if(Head == NULL)
    {
        cout<<"Queue is Empty ! \n";
        return -1;
    }
    else
    {
        int iNo = Head->data;
        PNODE temp = Head;
        Head = Head->Next;
        delete temp;
        iSize--;

        return iNo;
    }
}


int main(int argc, char const *argv[])
{
    Queue obj;
    int iChoice = 1,  iRet = 0, iNo = 0;


    while(iChoice != 0)
    {
        cout<<"Enter Choice : \n";
        cout<<"1. Insert the element \n";
        cout<<"2. Delete the element \n";
        cout<<"3. Display the elements\n";
        cout<<"4. Count the number of  elements\n";
        cout<<"0. Exit the application\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the Number  :";
                cin>>iNo;
                obj.Enqueue(iNo);
                break;
            
            case 2:
                iRet = obj.Dequeue();
                cout<<"Removed element : "<<iRet<<"\n";
                break;
            
            case 3:
                obj.Display();
                break;

            case 4:
                iRet = obj.Count();
                cout<<"Number of Elements : "<<iRet<<"\n";
                break;

            case 0:
                cout<<"Thank you for using Queue Application !\n";
                break;

            default:
                cout<<"Invalid Choice !!\n";
        } // End of switch
    } // End of while
    return 0;
} // End of Main

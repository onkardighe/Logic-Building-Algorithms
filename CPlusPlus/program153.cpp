#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE;

class Stack
{
    private:
        PNODE Head;
        int iSize;
    public:
        Stack();                    // Constructor
        ~Stack();                   // Destructor
        void Push(int);             // void InsertFirst(int);
        int Pop();                  // void DeleteFirst();
        void Display();
        int Count();
};

Stack::Stack()
{
    this->Head = NULL;              // Head = NULL;
    this->iSize = 0;
}

Stack::~Stack()
{

}

// InsertFirst()
void Stack::Push(int iNo)
{
    PNODE newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    newn->next = Head;
    Head = newn;
    iSize++;
}

// DeleteFirst()
int Stack::Pop()
{
    int iRet = -1;

    if(iSize == 0)
    {
        cout<<"Stack is Empty !!\n";
    }
    else
    {
        PNODE temp = Head;
        Head = Head->next;
        iRet = temp->data;
        delete(temp);
        iSize--;
    }
    return iRet;
}

void Stack::Display()
{
    PNODE temp = this->Head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

int Stack::Count()
{
    return this->iSize;
}

int main()
{
    Stack sobj;
    int iOption = 1, iRet = 0, iNo = 0;

    while(iOption != 0)
    {
        cout<<"Select The Option :\n";
        cout<<"1. Push the element \n";
        cout<<"2. Pop the Element\n";
        cout<<"3. Display the elements\n";
        cout<<"4. Count The number of elements\n";
        cout<<"0. Exit the Application !\n";

        cin>>iOption;
        switch(iOption)
        {
            case 1:
                cout<<"Enter the element to push :";
                cin>>iNo;
                sobj.Push(iNo);
                break;

            case 2: 
                iRet = sobj.Pop();
                cout<<"Popped Element is : "<<iRet<<"\n";
                break;

            case 3:
                cout<<"Elements of stack are :\n";
                sobj.Display();
                break;
            
            case 4:
                iRet = sobj.Count();
                cout<<"Number if elements in stack are : "<<iRet<<"\n";
                break;
            
            case 0:
                cout<<"Thenk You for using Linked List Application !!\n";
                break;
            
            default:
                cout<<"Invalid Input !! Enter Again !! \n";
        }
    }
    return 0;
}
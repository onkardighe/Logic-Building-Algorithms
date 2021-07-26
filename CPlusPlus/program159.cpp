#include<iostream>
using namespace std;

class Stack
{
    private:
        int iSize;
        int *Arr;
        int iTop;

    public:
        Stack(int);
        ~Stack();
        void Push(int);
        int Pop();
        void Display();
};

Stack::Stack(int iNo)
{
    iTop = -1;
    iSize = iNo;
    Arr =  new int[iSize];
}

Stack::~Stack()
{
    delete []Arr;
}

void Stack::Push(int iNo)
{
    if(iTop == iSize-1)
    {
        cout<<"Stack is Full !!\n";
    }
    else
    {
        iTop++;
        Arr[iTop] = iNo;
    }
}

int Stack::Pop()
{
    if(iTop == -1)
    {
        cout<<"Stack is Empty !!\n";
        return -1;
    }
    else
    {
        int iNo = Arr[iTop];
        iTop--;
        return iNo;
    }
}

void Stack::Display()
{
    if(iTop == -1)
    {
        cout<<"Stack is Empty !!\n";
    }
    else
    {
        for(int i = 0; i<=iTop; i++)
        {
            cout<<Arr[i]<<"\t";
        }
        cout<<"\n";
    }
}





int main(int argc, char const *argv[])
{
    
    int iNo = iNo, iRet = 0;
    cout<<"Enter Size of Array :";
    cin>>iNo;

    Stack obj(iNo);

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);

    obj.Display();

    iRet = obj.Pop();
    cout<<"Popped element is : "<<iRet<<"\n";
    iRet = obj.Pop();
    cout<<"Popped element is : "<<iRet<<"\n";


    
    return 0;
}

// Accept N numbers from user and perform addition on N numbers
// Static Memory Allocation

#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iSize;
    public:
        Array(int);
        ~Array();
        void Accept();
        void Display();
        int Addition();
};
Array::Array(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

Array::~Array()
{
    delete []Arr;
}

void Array::Accept()
{
    cout<<"Enter Elements : \n";
    for(int i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are :\n";
    for(int i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

int Array::Addition()
{
    int iSum = 0;
    for(int i = 0; i <iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int iNo = 0, iRet = 0;
    cout<<"Enter Size of Array :";
    cin>>iNo;

    // Array *obj = new Array(iNo);                // Call to Constructor
    Array obj(iNo);                                // Call to Constructor

    obj.Accept();
    obj.Display();
    iRet = obj.Addition();


    cout<<"Addition of all elements is : "<<iRet<<"\n";

    // delete obj;                                 // Call to destructor
    
    return 0;
}

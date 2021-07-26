// Accept n numbers from user & Give Maximum
// using OOP
// generic Class
// Using Dynamic object

#include<iostream>
using namespace std;

template<class T>
class Array
{
    private:
        T *Arr;
        int iSize;
    
    public:
        Array(int no)
        {
            iSize = no;
            Arr = new T[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter values :\n";
            for(int i = 0;i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        T Maximum()
        {
            T Max = Arr[0];
            for(int i = 0; i < iSize; i++)
            {
                if(Arr[i] > Max)
                {
                    Max = Arr[i];
                }
            }
            return Max;
        }
};


int main()
{
    int iRet = 0;
    int iNo = 0;
    cout<<"Enter Number of elements : ";
    cin>>iNo;

    Array<int>*obj = new Array<int>(iNo);


    obj->Accept();
    iRet = obj->Maximum();
    cout<<"Maximum is : "<<iRet<<"\n";
    
    delete obj;
    return 0;
}
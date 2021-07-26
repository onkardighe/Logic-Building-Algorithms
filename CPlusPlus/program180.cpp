
#include<iostream>
using namespace std;

template<class T>
T Max(T iNo1, T iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
    
}

int main()
{
    int iValue1 , iValue2, iRet = 0;
    cout<<"Enter First  :";
    cin>>iValue1;
    cout<<"Enter Second  :";
    cin>>iValue2;

    iRet = Max(iValue1,iValue2);          

    cout<<"Maximum is : "<<iRet<<"\n";
    return 0;
}
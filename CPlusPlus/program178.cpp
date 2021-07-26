
#include<iostream>
using namespace std;

// Specific Function
void Swap(int &iNo1, int &iNo2)       //Call By Reffarance
{
    int temp = 0;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

template<class T>        // template header     ******
void SwapX(T &iNo1, T &iNo2)       //Call By Reffarance
{
    T temp = 0;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}
int main()
{
    char iValue1 , iValue2 ;
    cout<<"Enter First  :";
    cin>>iValue1;
    cout<<"Enter Second  :";
    cin>>iValue2;

    SwapX(iValue1,iValue2);          // Swap(iValue1,iValue2);

    cout<<"After Swap value 1 : "<<iValue1<<"\n";
    cout<<"After Swap value 2 : "<<iValue2<<"\n";
    return 0;
}
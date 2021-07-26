//Call By Value

#include<iostream>
using namespace std;

void Swap(int iNo1, int iNo2)       //Call By Value
{
    int temp = 0;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

int main()
{
    int iValue1 = 0, iValue2  = 0;
    cout<<"Enter First Number :";
    cin>>iValue1;
    cout<<"Enter Second Number :";
    cin>>iValue2;

    Swap(iValue1,iValue2);          // Swap(10,20);

    cout<<"After Swap value 1 : "<<iValue1<<"\n";
    cout<<"After Swap value 2 : "<<iValue2<<"\n";
    return 0;
}
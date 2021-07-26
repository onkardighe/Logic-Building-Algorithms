// Accept n numbers from user & Give Maximum
// Naked Function

#include<iostream>
using namespace std;

int Maximum(int arr[], int iSize)
{
    int iMax = arr[0];
    for(int i = 0; i<iSize; i++)
    {
        if(arr[i] > iMax)
        {
            iMax = arr[i];
        }
    }
    return iMax;
}

int main()
{
    int *arr = NULL;
    int iSize = 0, iRet = 0;
    cout<<"Enter Number of Elements :";
    cin>>iSize;

    arr = new int[iSize];

    cout<<"Enter the Values :\n";
    for(int i = 0; i < iSize; i++)
    {
        cin>>arr[i];
    }
    
    iRet = Maximum(arr,iSize);
    cout<<"maximum is : "<<iRet<<"\n";
    delete []arr;





    return 0;
}
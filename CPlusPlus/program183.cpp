// Accept n numbers from user & Give Maximum
//generic Naked Function


#include<iostream>
using namespace std;

template<class T>
T Maximum(T arr[], int iSize)
{
    T iMax = arr[0];
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
    float *arr = NULL;
    int iSize = 0;
    float iRet = 0;
    cout<<"Enter Number of Elements :";
    cin>>iSize;

    arr = new float[iSize];

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
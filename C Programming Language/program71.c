// Find Frequency of that Number 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iValue)
{
    int iCnt = 0;

    for(int i = 0; i <  iLength; i++)
    {
        if(Arr[i] == iValue)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0, iNo = 0, iRet = 0;
    int *arr = NULL;

    printf("Enter Number of Elements :");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize*sizeof(int));

    printf("Enter Elements :");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Element that you want to search :");
    scanf("%d",&iNo);

    iRet = Frequency(arr,iSize,iNo);
    printf("Frequency is : %d",iRet);
    

    free(arr);
    return 0;
}

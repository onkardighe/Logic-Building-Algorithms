// take N numbers from user, then Ask a number from user & Find First Occurance of that number and return its index
//If Number not found return -1

#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int iLength, int iValue)
{
    int i = 0;
    if(Arr == NULL || iLength <= 0)
    {
        return -1;
    }

    for(i = (iLength-1); i>=0; i--)
    {
        if(Arr[i] == iValue)
        {
            break;
        }
    }
    return i;

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

    iRet = LastOccurance(arr,iSize,iNo);
    if(iRet == -1)
    {
        printf("There is No Such Number \n");
    }
    else
    {
        printf("Last Occurance is At : %d",iRet);
    }
    

    free(arr);
    return 0;
}

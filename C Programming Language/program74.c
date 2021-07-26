// take N numbers from user & Return Largest Value from that Numbers
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int i = 0, iMax = INT8_MIN;
    if(Arr == NULL || iLength <= 0)
    {
        return -1;
    }
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0;
    int *arr = NULL;

    printf("Enter Number of Elements :");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize*sizeof(int));

    printf("Enter Elements :");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&arr[i]);
    }


    iRet = Maximum(arr,iSize);
    printf("Largest Number is : %d",iRet);
    

    free(arr);
    return 0;
}

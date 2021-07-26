// Accept N numbers from user and display its sum
// using Recursion & Iteration

#include <stdio.h>
#include<stdlib.h>

int SumI(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0; 
    while(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;
}

int SumR(int Arr[], int iSize)
{
    static int iSum = 0;
    static int iCnt = 0;
    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        SumR(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0;
    printf("Enter Number of Elements :");
    scanf("%d",&iSize);
    p = (int*)malloc(sizeof(int)*iSize);

    printf("Enter Elements : \n");
    while(iCnt < iSize)
    {
        scanf("%d",&p[iCnt]);
        iCnt++;
    }

    iRet = SumR(p,iSize);
    printf("Sum is : %d\n",iRet);

    free(p);


    return 0;
}
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int ilength)
{
    if(Arr == NULL || ilength <= 0)
    {
        return;
    }
    for(int i = 0; i < ilength; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("%d\t",Arr[i]);
        }
    }

}

int main(int argc, char const *argv[])
{
    int iSize  = 0;
    int *arr = NULL;

    printf("Enter Total Numer if Elements :");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize*sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed !");
    }

    printf("Enter Elements ;");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    Display(arr,iSize);


    free(arr);

    return 0;
}

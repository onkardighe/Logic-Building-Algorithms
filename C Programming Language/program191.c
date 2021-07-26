#include<stdio.h>
#include<stdlib.h>

int Addition(int no1, int no2)
{
    return no1+no2;
}

int MyAdd(int x, int y, int z)
{
    return Addition(x,y)+z;
}

int MyAddX(int x, int y, int z)
{
    int ans = 0;
    ans = Addition(x,y);
    return ans+z;
}

int main()
{
    int iRet = 0;
    iRet = MyAdd(10,20,30);
    printf("Addition is : %d\n",iRet);
    return 0;
}
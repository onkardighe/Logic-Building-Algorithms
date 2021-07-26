#include<stdio.h>
#include<stdlib.h>

int Addition(int no1, int no2)
{
    return no1+no2;
}

int MyAdd(int x, int y)
{
    return Addition(x,y);
}

int MyAddX(int x, int y)
{
    int ans = 0;
    ans = Addition(x,y);
    return ans;
}

int main()
{
    int iRet = 0;
    iRet = MyAdd(10,20);
    printf("Addition is : %d\n",iRet);
    return 0;
}
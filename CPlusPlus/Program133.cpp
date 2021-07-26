#include<iostream>
using namespace std;
//Input : _ _Abc_ _ _ p15_ _ _&_ _ AB_ _
// Output : 4
class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    int WordCount()
    {
        int iCnt = 0;
        char *ptr = str;
        
        while(*ptr != '\0')
        {
            if(*ptr == ' ')
            {
                while((*ptr == ' ') && (*ptr != '\0'))
                {ptr++;}
            }
            else
            {
                iCnt++;
                while((*ptr != ' ') && (*ptr != '\0'))
                {   ptr++;  }
            }
        }
        return iCnt;
    }
};
int main()
{
    int ret = 0;
    StringX obj;
    obj.Accept();
    ret = obj.WordCount();
    cout<<"Word count is : "<<ret<<"\n";
    return 0;
}

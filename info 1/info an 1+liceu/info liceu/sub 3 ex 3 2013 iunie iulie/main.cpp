#include <iostream>

using namespace std;
void  valuri(int n,int v[101])
{
    int m=n2;
    for(int i=1; i<=n2; i++)
    {
        if(i%2!=0)v[i]=i;
        else
        {
            v[i]=m;
            m=m-2;
        }
    }
}
int main()
{




    return 0;
}

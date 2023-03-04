#include <iostream>

using namespace std;


int func(int x,int y,int n)
{
    if(n>0)
    {
        func(y,3*y-x,n-1);
        cout<<x<<" ";
    }
}

int main()
{
    return 0;
}

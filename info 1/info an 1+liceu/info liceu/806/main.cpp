#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x!=1)
    {
        cout<<x<<" ";
        if(x%2==0)
            x--;
        else
            x=(x+1)/2;
    }
    cout<<1;
    return 0;
}
/*
#include <iostream>
#include <fstream>
using namespace std;
int x;
void f(int a,int b,int n)
{
    if(a<=x)
    {
       if(n%2==0)
            f(b,b+1,n+1);
       else
        f(b,1+2*a,n+1);
        cout<<a<<" ";
    }

}
int main()
{

    cin>>x;
    f(1,2,1);
    return 0;
}
*/

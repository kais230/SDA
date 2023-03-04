#include <iostream>
#include <math.h>
using namespace std;


int interval(int n)
{
    int x=n+1,ok=0,i,s=0;
    while(ok==0)
    {
        for(i=2;i<=sqrt(x);i++)
        {
            if(x%i==0) s++;
        }
            if(s==0) ok=1;
                s=0;
            x++;
    }

return x;
}


int main()
{

int n;

cin>>n;

cout<<interval(n);






    return 0;
}

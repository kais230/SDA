#include <iostream>
#include <math.h>
using namespace std;
int prim(int x)
{ if(x<2) return 0;
    int s=1,i;
    for(i=2;i<=sqrt(x);i++)
        if(x%i==0) {return 0;}
    return 1;
}
int main()
{

int a,b,s=0,i;

cin>>a>>b;

for(i=a;i<=b;i++)
{
    if(prim(i)==1) s++;
}
cout<<s;
    return 0;
}

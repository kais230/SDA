#include <iostream>
#include <math.h>
using namespace std;
int f(int k)
{int i,s=1;
 for(i=2;i<=sqrt(k);i++)
 {
     if(k%i==0) s++;
 }
return s;
}
int main()
{
 int a,b,i,maxd,mink,n,v[1000];

    cin>>a;
    for(i=1;i<=a;i++)
    {   n=f(i);
    if(n>maxd)
    {
        maxd=n;

        if(mink>i) mink=i;
    }
    }

cout<<mink<<" "<<maxd;


    return 0;
}

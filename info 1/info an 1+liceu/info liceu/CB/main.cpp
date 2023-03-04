#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{long int a[2000000001],x,t,n,y,i,j;
int s,mij,k,ok=0;


for(i=1;i<=n;i++)
    f>>a[i];

for(k=1;k<=t;k++)
{
 j=n;
 i=1;
 ok=0;
    while(i<=j && ok==0)
    {   mij=(i+j)/2;
        if(x==a[mij])
        {

        }
        {ok=1;y[k]=1;}
        else if(y[k]<x[mij]) j=mij-1;
             else i=mij+1;
    }
    if(y[k]!=1) y[k]=0;
}
    return 0;
}

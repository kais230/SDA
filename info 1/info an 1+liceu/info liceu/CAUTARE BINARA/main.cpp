#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{int x[25001],y[200001],n,m,i,j,ok=0,k,mij;
f>>n;

for(i=1;i<=n;i++)
{

    f>>x[i];
}
f>>m;
for(i=1;i<=m;i++)
{

    f>>y[i];
}

for(k=1;k<=m;k++)
{i=1;
 j=n;
 ok=0;
    while(i<=j && ok==0)
    {   mij=(i+j)/2;
        if(y[k]==x[mij]) {ok=1;y[k]=1;}
        else if(y[k]<x[mij]) j=mij-1;
             else i=mij+1;
    }
    if(y[k]!=1) y[k]=0;
}

for(i=1;i<=m;i++)
{

    cout<<y[i]<<" ";
}
    return 0;
}

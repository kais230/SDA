#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int n,t[10000],d[10000],i,x,s=0,k,ds,ok=0;
float ts;
cin>>n;

for(i=0;i<n;i++)
{
    cin>>t[i];
    cin>>d[i];
}
cin>>x;

for(i=0;i<n;i++)
{
    s=s+t[i];
    if(s==x) {ok=1;break;}
}


if(ok==0) cout<<-1;
else
{k=i;
for(i=0;i<=k;i++)
{
    ds=ds+d[i];
}
ts=(float)x/60;

cout<<fixed<<setprecision(2)<<ds/ts;
}

    return 0;
}

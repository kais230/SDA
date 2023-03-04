#include <iostream>

using namespace std;

int main()
{int v[1000],i,s,x,y,z,n;
cin>>x>>y>>z>>n;
v[1]=x;
v[2]=y;
v[3]=z;

for(i=4;i<n;i++)
{
v[i]=v[i-1]+v[i-2]-v[i-3];
}
for(i=n;i>=0;i--)
{
    cout<<v[i]<<" ";
}



    return 0;
}

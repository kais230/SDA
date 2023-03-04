#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{int n,a[201][201],i,j,s=0,z;

f>>n;
f>>z;

for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
{
    f>>a[i][j];
}

if(z==1)
{
    for(i=1;i<=n;i++)
        for(j=i+1;j+1<n;j++)
        s=s+a[i][j];
}
if(z==2)
{
    for(i=2;i<=n-1;i++)
        for(j=n/2;j<=n;j++)
        s=s+a[i][j];
}
if(z==3)
{
    for(i=n/2;i<=n;i++)
        for(j=2;j<=n-1;j++)
        s=s+a[i][j];
}
if(z==4)
{
    for(i=2;i<=n-1;i++)
        for(j=1;j<=n/2;j++)
        s=s+a[i][j];
}

cout<<s;


    return 0;
}

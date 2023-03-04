

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");

int main()
{int n,m,a[51][51],i,j;

f>>n;

f>>m;

for(i=1;i<=n;i++)
{
 for(j=1;j<=m;j++)
{
f>>a[i][j];
}
}


for(i=1;i<=m;i++)
{

    a[i][1]=a[n][m];

    a[i][m]=a[n][m];
}
for(i=1;i<=m;i++)
{
    a[n][i]=a[n][m];
    a[1][i]=a[n][m];
}


for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";

        cout<<endl;
}


    return 0;}

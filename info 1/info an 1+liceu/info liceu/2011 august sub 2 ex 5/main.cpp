#include <iostream>

using namespace std;

int main()
{
int n,m,i,j,a[25][25];

cin>>n>>m;

for(i=1;i<=n;i++)
{
    a[i][m]=1;
}

for(i=1;i<=m;i++)
{
    a[n][i]=1;
}

for(i=n-1;i>=1;i--)
    for(j=m-1;j>=1;j--)
{
    a[i][j]=(a[i][j+1]+a[i+1][j])%10;
}

for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
}

    return 0;
}

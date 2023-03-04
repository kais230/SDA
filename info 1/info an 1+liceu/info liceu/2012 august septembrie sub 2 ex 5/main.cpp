#include <iostream>

using namespace std;

int main()
{
int i,j,n,a[50][50];
cin>>n;

for(i=1;i<=n;i++)
{
    a[i][1]=1;
}
for(i=1;i<=n;i++)
{
    a[n][i]=i;
}



for(i=n-1;i>=1;i--)
{
    for(j=2;j<=n;j++)
    {
        a[i][j]=a[i][j-1]+a[i+1][j];
    }
}

for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}

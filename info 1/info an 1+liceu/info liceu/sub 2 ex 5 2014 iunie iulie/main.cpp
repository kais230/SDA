#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in");
int main()
{int x[50][50],a[50][50],m=4,n=5,i,j;

for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
    f>>a[i][j];




   for(i=1;i<=m-1;i++)

    for(j=1;j<=n-1;j++)
    {
       if(i==m-1) x[i][j]=a[m][j];
       else if(j==n-1) x[i][j]=a[i][n];
       else x[i][j]=a[i][j];
    }

for(i=1;i<=m-1;i++)
{
    for(j=1;j<=n-1;j++)
    cout<<x[i][j]<<" ";

    cout<<endl;
}

    return 0;
}

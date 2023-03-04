#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
int a[50][50],m,n,i,j,x;

f>>n>>m;
for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    f>>a[i][j];



x=a[n][m];

for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
{
  if(i==1 || i==n) a[i][j]=x;
  if(j==1 || j==m) a[i][j]=x;

}


for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
}

    return 0;
}

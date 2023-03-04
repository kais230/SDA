#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{int m,n,i,j,ok=0,a[50][50];
f>>n>>m;

for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
{
    f>>a[i][j];
}
ok=0;

for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
{
    if(a[i][1]==a[j][m]&& a[i][1]!=0)
    {
        ok=1;
        cout<<a[i][1]<<" ";
    }
}
if(ok==0) cout<<"nu exista";






    return 0;
}

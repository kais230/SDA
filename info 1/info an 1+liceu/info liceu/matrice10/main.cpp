#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");

int main()
{int n,m,a[51][51],i,j,min1,min2,aux;

f>>n;

f>>m;

for(i=1;i<=n;i++)
{
 for(j=1;j<=m;j++)
{
f>>a[i][j];
}
}

min1=a[1][1];
min2=a[1][m];
for(i=1;i<=n;i++)
{
    if(min1>a[i][1]) min1=i;
    if(min2>a[i][m]) min2=i;
}

aux=a[min1][1];
a[min1][1]=a[min2][m];
a[min2][m]=aux;


for(i=1;i<=n;i++)
{
    cout<<endl;
    for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
}





    return 0;
}

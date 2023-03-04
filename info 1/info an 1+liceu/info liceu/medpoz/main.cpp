#include <iostream>
#include <fstream>
using namespace std;
ifstream f("medpoz.in");
ofstream g("medpoz.out");

int main()
{

int i,j,n,a[50][50],s=0,k=0;
//float s=0;
f>>n;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    f>>a[i][j];

for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
if(i>j && a[i][j]>0)
    {s=s+a[i][j];k++;}
}

if(s==0) cout<<"NU EXISTA";
else cout<<s/k;

    return 0;
}

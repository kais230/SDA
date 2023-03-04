#include <iostream>

using namespace std;

int main()
{int a[50][50],n,i,j,k,m,aux;

cin>>n;
cin>>k;

for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cin>>a[i][j];



if(n%2==0) m=n/2;
else m=n/2+1;
for(j=1;j<=m;j++)
{
   aux=a[k][j];
   a[k][j]=a[j][k];
   a[j][k]=aux;
}


for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
cout<<endl;
}
    return 0;
}

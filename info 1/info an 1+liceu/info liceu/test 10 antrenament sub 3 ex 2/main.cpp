#include <iostream>

using namespace std;

int main()
{
int a[21][21],n,m,ok=0;
   cin>>m;
   cin>>n;
   for(int i=1;i<=m;i++)
   {
       for(int j=1;j<=n;j++)
       {
           cin>>a[i][j];
       }
   }
   for(int i=1;i<=n-1;i++)
   {
       for(int j=m  ;j>1;j--)
       {
           if(a[1][i]==a[j][n]){cout<<a[1][i]<<" ";ok=1;}
       }
   }
   if(ok==0)cout<<"nu exista";    return 0;
}

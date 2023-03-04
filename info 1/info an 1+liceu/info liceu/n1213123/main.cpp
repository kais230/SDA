#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac1.txt");
ifstream g("bac2.txt");
int a[100000];
int main()
{
int n1,n2,i,j,x,y,ok=0;
f>>n1;
g>>n2;

for(i=1;i<=n1;i++)
{
    f>>x;
   if(x%5==0) a[x]++;
}
y=x;
for(i=1;i<=n2;i++)
{
    g>>x;
   if(x%5==0)'''' a[x]++;
}
if(y>x) x=y;

for(i=1;i<=x;i++)
{
    if(a[i]==1) {cout<<i<<" ";ok=1;}
}
if(ok==0) cout<<"nu exista";

    return 0;
}

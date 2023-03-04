#include <iostream>
#include <fstream>
using namespace std;
int v[10];
ifstream f("in.txt");
int main()
{
    int i=1,nr,m,n,x,a[10000000];
while(f>>x)
{
    a[i]=x;
    v[x%100/10]++;
    i++;
}
n=i;
m=v[1];
for(i=1;i<=9;i++)
{
    if(v[i]>m) {m=v[i];nr=i;}
}
for(i=n;i>=0;i--)
{
    if(v[i]%100/10==m) {cout<<i;break;}
}

    return 0;
}

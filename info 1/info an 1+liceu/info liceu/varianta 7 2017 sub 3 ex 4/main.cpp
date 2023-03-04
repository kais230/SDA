#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int v[1001];
int main()
{

int x,i,k=0,r=0,n,cr=0;

while(f>>x)
{
    v[x]++;
}

for(i=1;i<=1000;i++)
{
    if(v[i]>=1) k++;
    if(k==1) r++;
    if(k==2) break;
}
n=i;
for(i=n+1;i<=1000;i++)
{
    if(v[i]==0) cr++;
    else if(cr+1==r) cr=0;
         else {k=3; break;}

}

if(k==3) cout<<"nu";
else cout<<r;
    return 0;
}

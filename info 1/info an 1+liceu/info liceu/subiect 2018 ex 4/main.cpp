#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int v[10][3];
int main()
{
int i,j,x,secv,n,maxim=0;
i=1;
while(f>>x)
{
if(v[x][1]==0) {v[x][1]=i; v[x][2]=i;}
else v[x][2]=i;
i++;
}

n=i;

for(i=0;i<=9;i++)
{
    if(v[i][1]!=0) secv=v[i][2]-v[i][1]+1;
    if(maxim<secv) maxim=secv;
}
cout<<maxim<<endl;

for(i=1;i<=9;i++)
{
    if(v[i][1]!=0 && maxim==v[i][2]-v[i][1]+1) cout<<i<<" ";

}
    return 0;
}

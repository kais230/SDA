#include <iostream>
#include <fstream>
using namespace std;
ifstream f("cheltuieli.in");
int v[101];
int main()
{int x,y,z,i,k=0,maxim=0;

while(f>>x>>y>>z)
{
   v[x]=v[x]+y*z;
   if(maxim<v[x]) maxim=v[x];
}
cout<<maxim<<" ";

for(i=1;i<=100;i++)
{
    if(v[i]==maxim) k++;
}


cout<<k;









    return 0;
}

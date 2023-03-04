#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int v[100];
int main()
{int n,i,j,x,ok=0,mij;

    f>>n;
for(i=1;i<=n;i++)
{   f>>x;
    if(x<=99)
    v[x]=1;
}


while(f>>x)
{

   if(v[x]==1) cout<<x<<" ";

}

    return 0;
}

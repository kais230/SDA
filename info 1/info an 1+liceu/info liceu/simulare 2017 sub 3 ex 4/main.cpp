#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int v[20000];
int main()
{int m,n,x,i;
   f>>m>>n;

while(f>>x)
{
if(x%2==0)
{
    v[x]++;

}

}

for(i=x;i>=1;i--)
{
    if(v[i]!=0) cout<<i<<" ";
}


    return 0;
}

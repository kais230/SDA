#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int v[100];
int main()
{
int i,x,maxim=0;

while(f>>x)
{

while(x!=0)
{
    if(x>=10)
    {
        v[x%100]++;

    }
    x=x/10;
}



}
for(i=10;i<=99;i++)
{
    if(v[i]>maxim) maxim=v[i];
}


for(i=10;i<=99;i++)
{
    if(v[i]==maxim) cout<<i<<" ";
}

    return 0;
}

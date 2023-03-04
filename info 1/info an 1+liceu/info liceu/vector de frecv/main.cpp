#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{int v[11]={0},x,n;

while(f>>x)
{
    while(x!=0)
    {
        v[x%10]++;
        x=x/10;
    }
}
n=9;
while(n!=0)
{
    if(v[n]!=0) cout<<n;
    v[n]--;
    if(v[n]<=0) n--;
}


    return 0;
}

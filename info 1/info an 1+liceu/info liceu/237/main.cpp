#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sume.in");
ofstream g("sume.out");
int main()
{
int v[101],n,i,s=0;

f>>n;
for(i=1;i<=n;i++)
{
    f>>v[i];
}

while(n!=0)
{
    for(i=1;i<=n;i++)
    {
        s=s+v[i];
    }

    g<<s<<endl;
    s=0;
    n--;
}



    return 0;
}

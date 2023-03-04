#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{int a[100],b[100],m,n,i,ok=0;
f>>n;
f>>m;
for(i=1;i<=n;i++)
{
    f>>a[i];
}

for(i=1;i<=m;i++)
{
    f>>b[i];
}


for(i=1;i<m;i++)
{
    if(a[1]>b[i] && a[n]<b[i+1])
    {
        ok=i+1;
    }

}

if(ok==0) cout<<"imposibil";
else cout<<ok;


    return 0;
}

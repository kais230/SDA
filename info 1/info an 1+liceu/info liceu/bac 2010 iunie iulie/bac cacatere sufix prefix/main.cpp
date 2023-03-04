#include <iostream>
#include <string.h>
using namespace std;

int main()
{char a[31],b[31];
int k=0,i;
cin>>a;
cin>>b;

for(i=0;i<=strlen(a);i++)
{
    if(strstr(a,a+1)==b)
    {
    cout<<a+i<<" ";
    k++
    }
}

if(k==0) cout<<"NU EZISTA";

return 0;
}

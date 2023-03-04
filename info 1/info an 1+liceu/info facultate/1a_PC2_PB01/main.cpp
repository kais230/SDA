#include <iostream>

using namespace std;


int main()
{
short int n;
int x,j,i,v[65700],k=0,kmax=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
}


for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
            if(v[i]==v[j]) k++;
    }
    if(k>kmax)
    {
        kmax=k;
        x=v[i];
    }
    k=0;
}
cout<<x<<" "<<kmax;
    return 0;
}

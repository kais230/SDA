#include <iostream>

using namespace std;

int main()
{
int v[50],i,n,k;

cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v[i];
}



for(i=1;i<=n;i++)
{
    if(v[i]==v[i+1])
    {k=i;
        while(k<=n)
        {
          v[k]=v[k+2];
          k++;
        }
        n=n-2;
    }
}




for(i=1;i<=n;i++)
    cout<<v[i]<<" ";

    return 0;
}

#include <iostream>

using namespace std;
void dublu(int n,int v[100])
{int a[100],m,i,j=1,s=0;
m=2*n;

    for(i=1;i<=n;i++)
    {
        if(v[i]>0) s++;
    }
    for(i=1;i<=n+s+1;i++)
    {
        if(v[i]>=0) {a[j]=v[i];a[j+1]=v[i];j++;}
        else a[j]=v[i];
        j++;
    }
    for(i=1;i<=n+s+1;i++)
    {
        v[i]=a[i];
    }
}
int main()
{
    int i,u[50],nr;

    cin>>nr;

    for(i=1;i<=nr;i++)
        cin>>u[i];

dublu(nr,u);


    return 0;
}

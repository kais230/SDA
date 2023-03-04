#include <iostream>

using namespace std;


int sir(int n,int a[25])
{int i,v[25],k=1;
a[1]=1;
a[2]=1;
for(i=3;i<=n;i++)
{
    a[i]=3*a[i-1]-a[i-2];
}


 for(i=1;i<=n;i++)
 {
     if(a[i]%2==1) {v[k]=a[i];k++;}
 }
  for(i=1;i<=n;i++)
  {
      if(a[i]%2==0) {v[k]=a[i];k++;}
  }

for(i=1;i<=n;i++)
{
    a[i]=v[i];
}
}









int main()
{int a[50],i,n;
cin>>n;
sir(n,a);

for(i=1;i<=n;i++)
{
    cout<<a[i]<<" ";
}





    return 0;
}

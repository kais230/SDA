#include <iostream>

using namespace std;
int i;
void F(int n, int a[11], int &k)
{
   if(n<=0)
   {
       if(k==1) k=0;
       else k=-1;
   }
   else
   {
       if(a[n-1]%2==0) k=1;
       F(n-1,a,k);
       if(a[n-1]%2==0) k=k*10+a[n-1];
   }
}


int main()
{
int v[11],x,j;
cin>>x;
for(j=1;j<=x;j++)
    cin>>v[j];

 F(x,v,0);

    return 0;
}

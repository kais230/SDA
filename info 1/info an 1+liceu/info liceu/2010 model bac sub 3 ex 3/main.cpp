#include <iostream>

using namespace std;


int nz(int n)
{int i,a=0,b=0,x;

for(i=1;i<=n;i++)
{
    if(i%2==0)
    {
     x=i;
     while(x%2==0)
     {
         a++;
         x=x/2;
     }
    }
    if(i%5==0)
    {
         x=i;
     while(x%5==0)
     {
         b++;
         x=x/5;
     }
        }
}

if(a>b) return b;

return a;


}

int main()
{
int n=0,k,y,ok=0;

cin>>k;

while(ok==0)
{
  y=nz(n);
  if(y==k) ok=1;

   n++;

}
n=n-1;
cout<<n;







    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{

int n,v[1000],i,j,mij,s=0,ok,x,y,k=1;
f>>n;
for(i=1;i<=n;i++)
    f>>v[i];

    /*stiinte
 while(f>>x)
   {ok=0;
    i=1;j=n;
    while(i<=j && ok==0)
    {
        mij=(i+j)/2;
        if(x==a[mij]) ok=1;
        else if(x<a[mij]) j=mij-1;
        else i=mij+1;
    }
       if(!ok)ct++;
   }
   cout<<ct;

*/
while(i<=n)
   {
       i++;
       f>>v[i];
   }
   while(f>>c1>>c2)
   {
       i=1;j=n;ok=0;
       while(i<=j && ok==0)
       {
           mij=(i+j)/2;
           if(v[mij]>=c1 && v[mij]<=c2)
           {
               ok=1;
           }
           else if(v[mij]<c1){
            j=mij-1;
           }
           else i=mij+1;
       }
       if(ok==0)ct++;
   }


 cout<<ct;
    return 0;
}

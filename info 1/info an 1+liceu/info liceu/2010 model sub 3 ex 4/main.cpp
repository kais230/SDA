#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream f("BAC.TXT");
int main()
{int n,a,b,p=1,i,k=0,ok=0;
f>>n;

for(i=1;i<=n;i++)
{
   f>>a;
   f>>b;
p=b;
ok=0;
   while(p>=a)
   {

       k=0;
     if(p%2==0)
     {
         while(pow(2,k)<p)
         {
             k++;
         }
         if(pow(2,k)==p){ok=1; cout<<p<<" ";break;}
     }
     p--;
   }
   if(ok==0) cout<<0<<" ";

}






    return 0;
}

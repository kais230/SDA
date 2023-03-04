#include <iostream>
#include <fstream>
using namespace std;

ifstream f("numere.in");

int main()
{int x,i=1,n,ok=0,y;
f>>n;
f>>x;

while(i<=n)
{y=x;
   if(i==x)
   {f>>x;
   if(y==x) f>>x;
   }
   else { cout<<i<<" ";ok=1;}
i++;


}
if(ok==0) cout<<"nu exista";




    return 0;
}

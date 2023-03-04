#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{int x,y,i,n=0;


f>>x;
while(f>>y)
{
   if(x==y) n=x;
   else if(n!=x && x!=y) cout<<x<<" ";

   x=y;

}
if(x!=n) cout<<x;

    return 0;
}

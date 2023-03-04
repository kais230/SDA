#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
   int lmax=0;
   int c=1;
   int x,y,t;
   f>>x;
   while(f>>y)
   {
        if(x==y)
          {
            c++;
            if(c>=lmax){t=y;lmax=c;}
          }
        else c=1;
        x=y;
   }
   cout<<lmax<<" "<<t;

}

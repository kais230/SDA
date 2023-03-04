#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int sum_cif(int n)
{int s=0;
  while(n!=0)
  {
      s=s+n%10;
      n=n/10;
  }
  return s;
}


int main()
{int x,y,c=1,cmax=0;
    f>>x;
while(f>>y)
   {
       if(sum_cif(x)==sum_cif(y))
       {
           c++;
           if(c>cmax)cmax=c;
       }
       else c=1;
       x=y;
   }
   cout<<cmax;    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{int x,y,k=1,kmax=1,u,umax;

f>>x;
while(f>>y)
{
  if(x<y) {k++;u=y;}
  if(k>=kmax) {kmax=k;umax=u;}
   if(y>x) k=1;
x=y;
}

cout<<umax;


    return 0;
}

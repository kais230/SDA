#include <iostream>
#include <fstream>
using namespace std;
ofstream g("bac.out");
int main()
{int x,y,n;
cin>>x>>y;

n=(y-x)/2;
g<<y<<" ";

while(n>=1)
{
  g<<x<<" ";
  n=n-1;
  x=x-2*n;
}










    return 0;
}

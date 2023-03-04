#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int v[100];
int main()
{int x,ok=0,s=0,smax;

while(f>>x)
{
  if(x%10==0) ok=1;
  else ok=0;

if(ok==1)
{
    s++;
    if(s>smax) smax=s;
}
else s=0;
if(s==smax) v[smax]++;
}

cout<<smax<<" "<<v[smax];



    return 0;
}

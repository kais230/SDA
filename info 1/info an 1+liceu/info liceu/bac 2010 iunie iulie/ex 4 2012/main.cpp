#include <iostream>
#include <fstream>
using namespace std;
int main()
{ int p,u,x,nr;
    cin>>x;
  p=1;
  while(p<=9)
  {
      u=p+x;
      nr=p*10+u;
      while(u<=9)
      {
          cout<<nr<<" ";
          u=u+x;
          nr=nr*10+u;
      }
      p++;
  }
}

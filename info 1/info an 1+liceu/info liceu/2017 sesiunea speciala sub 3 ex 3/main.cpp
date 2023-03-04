#include <iostream>
using namespace std;


void produs(int a,int &k)
{
  int p=1;
k=1;

  while(p*k<=a)
  {
      p=p*k;
      k=k+2;
  }
k=k-2;
}


int main()
{int k,a;

produs(200,k);
cout<<k;



    return 0;
}

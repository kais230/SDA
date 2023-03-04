#include <iostream>
#include <fstream>
using namespace std;
ifstream f("BAC.TXT");

int a[10];
int main()
{int x,cx,i,maxim=0,k=0,kmax=0;


while(f>>x)
{k++;
    cx=x;
 while(cx>=10)
cx=cx/10;

a[cx]++;

if(maxim<a[cx]) {maxim=a[cx];kmax=k;}
}

for(i=1;i<=9;i++)
{
  if(a[i]==maxim)  cout<<kmax;
}



    return 0;
}

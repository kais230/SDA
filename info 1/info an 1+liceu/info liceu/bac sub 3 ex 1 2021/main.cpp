#include <iostream>

using namespace std;


void prime(n,x,y);
{int k=1,i,ok=1;
    while(k!=2)
    {ok=1;
     for(i=2;i<=sqrt(n);i++)
     {
         if(n%i==0) ok=0

     }
       if(ok==1 && k==1) {y=n;k=2;}
       if(ok==1 && k==2) {x=n;k=3;}
       if(k==3) break;
    }
    n--;
}
int main()
{

int


    return 0;
}

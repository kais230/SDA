#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{int x,a=0,b=0,c=0,ok=1,aux,n;
f>>n;
while(f>>x)
{
    if(x%5==0 && x!=0)
    {
       if(ok==1)
       {
           a=x;
           ok++;
       }
       if(ok==2)
       {
           b=x;
           ok++;
       }
       if(ok==3)
       {
           c=x;
           ok++;
           if(a>b) {aux=b;b=a;a=aux;}
            if(b>c) {aux=c;c=b;b=aux;}
           if(a>b) {aux=b;b=a;a=aux;}
       }
       if(ok==4)
       {
           if(x>a) a=x;
           if(x>b) {a=b; b=x;}
           if(x>c) {a=b;b=c;c=x;}
       }
    }
}


cout<<a<<" "<<b<<" "<<c;




    return 0;
}

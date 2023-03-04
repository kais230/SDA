#include <iostream>
#include <fstream>

using namespace std;
ifstream f("nrsufix.in");
ofstream g("nrsufix.out");
int main()
{
    int a,b,x,ok=1,c=0,nr,y;

    f>>a;

    while(f>>b)
    {


        if(a==b) {g<<b<<" ";c=1;}
        else if(a%10==b%10 && a<b)
        {   x=a;
            y=b;
            while(x!=0)
            { x=x/10;
             b=b/10;
                if(x%10!=b%10) ok=0;
            }
            if(ok==1) {g<<y<<" ";c=1;}
            ok=1;
        }
    }
if(c==0) g<<"nu exista";


    return 0;
}

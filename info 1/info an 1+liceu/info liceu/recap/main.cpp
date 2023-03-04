#include <iostream>

#include <fstream>
using namespace std;
ifstream f("2prim.in");
ofstream g("2prim.out");
int main()
{
    int n,x,k=0,i,ok=1,j;

    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>x;


        x=x%100;
        if(x>=11)
        {

            ok=1;
            for(j=2; j<=x/2; j++)
            {
                if(x%j==0) ok=0;
            }
            if(ok==1) k++;
        }
    }



    g<<k;

    return 0;
}

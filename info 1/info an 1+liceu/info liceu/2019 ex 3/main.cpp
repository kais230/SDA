#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int x,vmax=0,ok=0;
    while(f>>x)
    {
        if(x>vmax)
        {
            vmax=x;
            cout<<x<<" ";
            ok=1;
        }
        else if(x==vmax)
        {
            if(ok==1) cout<<x<<" ";
        }
        else ok=0;
    }
}

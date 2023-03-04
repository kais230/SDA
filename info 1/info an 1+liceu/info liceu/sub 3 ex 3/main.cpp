#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x,p1,p2,ok=0,nrtotal=0;
    ifstream f("bac.in");
    while(f>>x)
    {
        nrtotal++;
        if(x<0)
        {
            if(ok==0)
            {
                p1=nrtotal;
                ok=1;
            }
            else
                p2=nrtotal;
        }
    }
    if(p2>nrtotal-p1+1)
        cout<<p2;
    else cout<<nrtotal-p1+1;
    return 0;
}

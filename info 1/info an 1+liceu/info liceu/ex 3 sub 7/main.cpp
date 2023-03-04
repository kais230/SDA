#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x,smin=1000,s=0,c=0,minim=1000;
    ifstream f("bac.in");
    f>>x;
    s=x;
    while(f>>x)
    {
        if(x<minim)
            minim=x;
        if(s+x<0)
        {
            c++;
            s=s+x;
            if(s<smin)
                smin=s;
        }
        else s=0;
    }
    if(c==0)
        cout<<minim;
    else
    cout<<smin;
    return 0;
}

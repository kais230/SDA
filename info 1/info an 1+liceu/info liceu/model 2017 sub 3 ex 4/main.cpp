#include <iostream>
#include <fstream>
using namespace std;
ofstream g("bac.in");
int main()
{int x,y;
    cin>>x>>y;
    g<<y<<" ";
    while(y>x)
    {
        if(y%2==0)
        {
            y=y-1;
        }
        else
        {
            y=(y+1)/2;
        }
        g<<y<<" ";
    }



    return 0;
}

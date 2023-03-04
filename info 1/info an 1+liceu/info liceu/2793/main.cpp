#include <iostream>
#include <fstream>
using namespace std;
ifstream f("pozitiiconsecutive.in");
ofstream g("pozitiiconsecutive.out");
int main()
{
    int x,y,z;
f>>x;
f>>y;
g<<y<<" "<<x<<" ";


while(x!=0)
{
    z=2*x-y+2;
    g<<z<<" ";
    y=x;
    x=z;
}


    return 0;
}

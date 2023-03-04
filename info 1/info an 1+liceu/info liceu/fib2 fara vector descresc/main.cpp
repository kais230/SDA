#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("bac.txt");
    int x,y,c;
    cin>>x>>y;
    while(y!=1)
    {
        g<<y<<" ";
        c=3*x-y;
        y=x;
        x=c;
    }
    g<<1<<" "<<1;
    return 0;
}

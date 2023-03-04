#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{int x,a=101,b=9,cx;

while(f>>x)
{
    if(x>9 && x<101)
    {
        if(a>x) a=x;
        if(b<x) b=x;
    }
}
if(a==101) cout<<"nu";
else cout<<a-1<<" "<<b+1;


    return 0;
}

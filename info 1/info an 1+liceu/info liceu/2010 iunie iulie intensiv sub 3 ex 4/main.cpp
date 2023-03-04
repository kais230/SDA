#include <iostream>
#include <fstream>
using namespace std;
ifstream f("BAC.TXT");
int main()
{int x,y,k=0;

    f>>x;
    while(f>>y)
    {
        if(x==y) k++;
        if(k==0) cout<<x<<" ";
        if(x!=y) k=0;

        x=y;

    }
if(k==0) cout<<y;







    return 0;
}

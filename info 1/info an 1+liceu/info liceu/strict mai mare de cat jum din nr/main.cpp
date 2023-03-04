#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
    int x,maxim,n,i,c=1;

    f>>n;
f>>x;
maxim=x;
while( f>>x)
{
    if(x>maxim) {maxim=x; c=1;}
    else if (x==maxim)
   c++;

}

if(c<n/2) cout<<"da";
    else cout<<"nu";





    return 0;
}

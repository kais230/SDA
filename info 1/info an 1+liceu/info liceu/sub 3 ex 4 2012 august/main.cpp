#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{int i,n,y,x,s=1,maxim;
f>>n;
f>>y;
f>>x;
maxim=max(x,y);
for(i=3;i<=n;i++)
{
    if(maxim==x) s++;
    else if(maxim<x) {maxim=x;s=0;}

    f>>x;


}

if(n-s>n/2) cout<<"DA";
        else cout<<"NU";



    return 0;
}

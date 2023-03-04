#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double nr=0,x,cx,y;

cin>>x;
cx=x*x;
x=cx;
while(cx>=1)
{
    cx=cx/10;
    nr++;
}
y=x/nr;
cout<<fixed<<setprecision(2)<<y;




    return 0;
}

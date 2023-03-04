#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
int x,s=0,smax=0,ok=1,y;
f>>x;
y=x;
s=y;
while(f>>x)
{
    if(x%2==y%2) ok=1;
    else ok=0;
    if(ok==1)
        {s=s+x;
         if(smax<s) smax=s;


        }
    else {y=x;s=y;

}
cout<<smax;





    return 0;
}

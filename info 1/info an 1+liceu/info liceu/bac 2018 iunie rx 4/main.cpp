#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
int y,x,s=1,smax=1,ok=0;

f>>y;

while(f>>x)
{
 if(x==y) ok=0;
 else ok=1;

if(ok==1)
{
    s++;
    if(s>smax) smax=s;
}
else s=1;

y=x;


}
cout<<smax;








    return 0;


}

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{int x,y,k=1,ok=0;

f>>y;

while(f>>x)
{
    if(y==x) k++;
    else if(k%2==1) {ok=1;cout<<y;break;}
        else k=1;
    y=x;
}
if(ok==0 && k%2==1) {ok=1;cout<<y;}
if(ok==0) cout<<"nu exista";




    return 0;
}

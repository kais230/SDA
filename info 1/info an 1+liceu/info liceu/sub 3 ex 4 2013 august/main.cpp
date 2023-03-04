#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
int cx,cy,x,y,nr=0,ok=0;

f>>x;

while(f>>y)
{cx=x;
cy=y;
ok=1;

        while(cx!=0  && ok==1)
        {

            if(cx%10!=cy%10) ok=0;
            cx=cx/10;
            cy=cy/10;
        }


    if(ok==1) nr=y;



}

if(nr==0) cout<<"nu exista";
else cout<<nr;







    return 0;
}

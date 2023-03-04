#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
    int x,n,cx,cn,ok=1,s=0;
f>>n;


while(f>>x)
{
    cn=n;
    cx=x;
    if(cx%10==cn%10)
    {
        while(cn!=0 && ok==1)
        {
            cx=cx/10;
            cn/cn/10;
            if(cx%10!=cn%10) ok=0;
        }
        if(ok==1) s=x;
        else ok=1;
    }
}

if(s!=0) cout<<s;
else cout<<"NU EXISTA";
    return 0;
}

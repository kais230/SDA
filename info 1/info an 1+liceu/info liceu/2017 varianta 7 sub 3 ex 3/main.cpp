#include <iostream>

using namespace std;

void triplete(int a,int b,int c)
{int x,y,z,ok=0;

    for(x=a;x<=b;x++)
        for(y=x;y<=b;y++)
        for(z=y;z<=b;z++)
    {
        if(x+y+z==c) {ok=1;cout<<x<<","<<y<<","<<z<<endl;}
    }

if(ok==0) cout<<"nu exista";
}

int main()
{int a,b,c;


cin>>a>>b>>c;

triplete(a,b,c);








    return 0;
}

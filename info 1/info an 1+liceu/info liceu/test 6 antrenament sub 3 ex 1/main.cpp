#include <iostream>

using namespace std;


void numar(int n, int c,int &m)
{int aux=0,ok=0;

    while(n!=0)
    {
       if(n%10!=c || n&10==0) {m=m*10+n%10;ok=1;};
        n=n/10;

    }
if(ok==0) m=-1;
else{


    while(m!=0)
    {

        aux=aux*10 + m%10;
        m=m/10;
    }
    m=aux;
}

}



int main()
{int m;
numar(34554,5,m);
cout <<m;



    return 0;
}

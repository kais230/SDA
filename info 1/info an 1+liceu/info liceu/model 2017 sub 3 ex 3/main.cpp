#include <iostream>

using namespace std;



int nrDiv(int a,int b)
{int i,s=0;

for(i=1;i<=b;i++)
{
    if(i*(i+1)<=b && i*(i+1)>=a) s++;

}

    cout<<s;

}
int main()
{

nrDiv(10,40);





    return 0;
}

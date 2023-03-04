#include <iostream>

using namespace std;
/*void f(int &n)
{
    int aux;
    while(n)
    {
        if(n%2==1) aux=aux*10+n%10;
        n=n/10;
    }
while(aux)
{
    n=n*10+aux%10;
    aux=aux/10;
}
*/
void f(int &n)
{
    int aux,s;
     aux=n%10;
     n=n/10;
     while(n)
     {
         aux=aux*10+abs(aux%10-n%10);
         aux=aux*10+n%10;
         n=n/10;
     }

    while(aux)
{
    n=n*10+aux%10;
    aux=aux/10;
}


 cout<<n;
}
int main()
{
    int n;
    cin>>n;

    f(n);


    return 0;
}

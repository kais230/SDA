#include <iostream>

using namespace std;

void zero(int n,int v[100])
{
    int i,aux;



    for(i=1; i<=2*n; i++)
    {
        if(v[i]%2!=i%2)
        {

            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;

        }
    }



}


int main()
{
    int a[50],n,i;
    cin>>n;
    for(i=1; i<=2*n; i++)
        cin>>a[i];


    zero(n,a);

    for(i=1; i<=2*n; i++)
        cout<<a[i]<<" ";




    return 0;
}

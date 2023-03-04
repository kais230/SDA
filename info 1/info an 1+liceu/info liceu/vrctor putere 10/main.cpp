#include <iostream>
#include <fstream>
using namespace std;
ifstream f("puteri6.in");
ofstream g("puteri6.out");
int main()
{int a[10]={0},n,x,ct1,ct2=0,s=0;
    f>>n;
    while(f>>x)
    {ct1=0;
        while(x!=1)
        {  ct1++;
            x=x/10;

        }
        a[ct1]++;
    }
    for(int i=0;i<=9;i++)
    {
        s=s+a[i];
        if(s>=n){
                g<<1;
        for(int j=1;j<=i;j++)
                g<<0;
        i=10;ct2++;}

    }
    if(ct2==0)g<<"Nu exista";




}

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream f("bac.txt");
int v[1000001];
int main()
{
int i=0,maxim1=1,maxim2=1,n,k,x,ok=1;

f>>k;

while(f>>x)
{
    if(x%k==0)
    {   i++;
        ok=1;
        if(i>maxim1) maxim1=i;
        if(i==maxim1) v[maxim1]++;
    }
    else
    {
        i=0;
    }
}
cout<<maxim1<<" "<<v[maxim1];


    return 0;
}

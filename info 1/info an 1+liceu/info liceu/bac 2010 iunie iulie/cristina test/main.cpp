#include <iostream>
#include <fstream>
using namespace std;
ifstream f("BAC.TXT");

int main()
{
    int n,x,s=0,v[50],i=1,j,ok=0,nr;

    f>>n;

    while(f>>x)
    {
        v[i]=x;
        i++;
    }

    nr=i-1;

    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nr; j++)
        {

            if(v[i]>v[j]) s++;
        }
        if(s==nr/2) ok=1;
        s=0;
    }

    if(ok==1) cout<<"DA";
    else cout<<"NU";

    1 2 3 4 5

    1 2 3 4 5

    return 0;
}

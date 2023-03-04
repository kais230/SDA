#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int v[1000000];
int main()
{int x,n=1,i,j,ok=0,val=1,r=0;


while(f>>x)
{
   v[n]=x;
   n++;
}



 for (i=1;i<n;i++)
    for (j=1;j<n-i;j++)
        if (v[j]>=v[j+1])
            swap(v[j],v[j+1]);


    for(i=1; i<n-1; i++)
    {
        if(ok==1)
        {
            if((v[i+1]-v[i]!=r && v[i+1]!=v[i])) val=0;

        }

        if(ok==0 && v[i]!=v[i+1])
        {
            r=v[i+1]-v[i];
            ok=1;
        }
    }


    if(val==1) cout<<r;
    else cout<<"NU";

    return 0;
}

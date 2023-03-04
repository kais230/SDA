#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int n,v[1000],i;
float k=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }


    for(i=1; i<n; i++)
    {


        if(v[i-1]>=0 && v[i]<0 || v[i-1]<0 && v[i]>=0) k++;


    }
k=k;
   cout<<fixed<<setprecision(2)<<k/n;

    return 0;
}

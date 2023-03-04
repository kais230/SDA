#include <iostream>
#include <fstream>
using namespace std;
ifstream f("zone.in");
ofstream g("zone.out");

int main()
{int n,i,j,v[101];
    cin>>n;
    for(i=1;i<=3*n;i++)
    {
        cin>>v[i];
    }


   for(i=1;i<n;i++)
   {
       if(v[i]%2==0) break;
   }

 for(j=3*n;j>=2*n+1;j--)
 {
     if(v[j]%2==1) break;
 }

 if(i!=3*n || j!=2*n+1)
    swap(v[i],v[j]);


    return 0;
}

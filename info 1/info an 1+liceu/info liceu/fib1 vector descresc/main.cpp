#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("bac.txt");
    int x,y,v[10000],n,i;
    cin>>x>>y;
    v[1]=v[2]=1;
    for(i=3;3*v[i-1]-v[i-2]<=y;i++)
        v[i]=3*v[i-1]-v[i-2];
    n=i-1;
    for(i=n;i>=1;i--)
        cout<<v[i]<<" ";
    return 0;
}

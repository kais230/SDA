#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
    int n,a[50][50],i,j;


 f>>n;

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>a[i][j];


for(i=1;i<=n;i++)
    cout<<a[i][1]<<" ";


for(i=2;i<=n;i++)
    cout<<a[n][i]<<" ";



for(i=n-1;i>=1;i--)
    cout<<a[i][n]<<" ";


for(i=n-1;i>=2;i--)
    cout<<a[1][i]<<" ";








    return 0;
}

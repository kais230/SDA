#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
    int n,i,j,a[50][50],s=0;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>a[i][j];


for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
{
    if(i<j && i+j>n+1 && j!=n)
        s=s+a[i][j];
}

cout<<s;
    return 0;
}

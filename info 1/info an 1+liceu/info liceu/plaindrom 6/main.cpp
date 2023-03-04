#include <iostream>
#include <fstream>
using namespace std;
ofstream g("bac.out");
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            g<<i<<j<<x<<x<<j<<i<<" ";
        }
    }
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            g<<i<<x<<j<<j<<x<<i<<" ";
        }
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            g<<x<<i<<j<<j<<i<<x<<" ";
        }
    }
}

#include <iostream>

using namespace std;
int main()
{
    int n,a[21][21];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i+j==n+1)
            {
                a[i][j]=n;
            }
            else
            {
                if(i+j<n+1)
                {
                    a[i][j]=i+j-1;
                }
                else
                {
                    a[i][j]=2*n-(i+j)+1;
                }
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

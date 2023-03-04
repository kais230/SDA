#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, w;
    float a[100][100], m;
    cin>>n>>w;
    if(w%2==0)
        w=w+1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=w/2+1; i<=n-w/2; i++)
        for(int j=w/2+1; j<=n-w/2; j++)
        {
            m=0;
            for(int i1=i-w/2; i1<=i+w/2; i1++)
                for(int j1=j-w/2; j1<=j+w/2; j1++)
                    m=m+a[i1][j1];
            m/=w*w;
            a[i][j]=m;
        }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<fixed<<setprecision(2)<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

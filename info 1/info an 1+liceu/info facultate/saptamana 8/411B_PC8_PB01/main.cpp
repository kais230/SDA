#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, w;
    float v[1000],s=0;
    cin>>n>>w;
    if(w%2==0)
        w=w+1;
    for(int i=1; i<=n; i++)
        cin>>v[i];
    for(int i=1; i<=n; i++)
        if(i<=w/2 || n-i<w/2)
            cout<<fixed<<setprecision(2)<<v[i]<<" ";
        else
        {
            s=0;
            for(int j=i-w/2; j<=i+w/2; j++)
                s=s+v[j];
            v[i]=s/w;
            cout<<fixed<<setprecision(2)<<v[i]<<" ";
        }
    return 0;
}

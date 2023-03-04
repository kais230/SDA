#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;

    for(i=1; i<=3; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=1; k<=n-j-1; k++)
            {
                cout<<" ";
            }
            for(k=1; k<=j*2+1; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    if(n%2==1)
    {

        for(i=1; i<=n; i++)
        {
            for(k=1; k<=n/2+1; k++)
            {
                cout<<" ";
            }
            for(j=1; j<=n-2; j++)
            {
                cout<<"*";
            }
            cout<<endl;

        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
             for(k=1; k<=n/2; k++)
            {
                cout<<" ";
            }
            for(j=1; j<=n-1; j++)
            {
                cout<<"*";
            }
            cout<<endl;

        }

    }





    return 0;
}

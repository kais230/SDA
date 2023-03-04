#include <iostream>

using namespace std;

int main()
{
    int n,a[21][21],i,j;

    cin>>n;

    for(i=1;i<=n;i++)
    {


        for(j=1;j<=n;j++)
        {
            a[i][j]=n-j-i+1;
           if(a[i][j]<0) a[i][j]=a[i][j]*(-1);

        }
    }


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

        return 0;
}

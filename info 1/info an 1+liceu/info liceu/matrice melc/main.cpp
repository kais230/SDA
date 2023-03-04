#include <iostream>
#include <fstream>
using namespace std;
fstream f("in.txt");
int main()
{
    int a[50][50],i,j,n,cn,k,c;
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];

    cn=n;
    c=1;
    k=0;


    while(k!=cn*cn)
    {
        if(k!=cn*cn)
            for(i=c; i<=n-1; i++)
            {
                cout<<a[c][i]<<" ";  //N
                k=k+1;
            }

        if(k!=cn*cn)
            for(i=c; i<=n-1; i++)
            {
                cout<<a[i][n]<<" ";  //E
                k++;
            }

        if(k!=cn*cn)
            for(i=n; i>c; i--)
            {
                cout<<a[n][i]<<" ";    //S
                k++;
            }

        if(k!=cn*cn)
            for(i=n; i>c; i--)
            {
                cout<<a[i][c]<<" ";   //V
                k++;
            }


        n--;
        c++;
     if(k==cn*cn-1) k=cn*cn;
    }

    if(cn%2==1) cout<<a[cn/2+1][cn/2+1];

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,i=1,j,k=0,x=0;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i)*2; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=2*i-2; j++)
        {
            if((j+x)%10==0)
            {
                x++;

            }
            if(j>=10) cout<<(j+x)%10<<" ";
            else cout<<j<<" ";

        }
        if((j+x)%10==0)
            {
                x++;

            }
            if(j>=10) cout<<(j+x)%10;
            else cout<<j;

        x=0;


        cout<<endl;

    }


    return 0;
}

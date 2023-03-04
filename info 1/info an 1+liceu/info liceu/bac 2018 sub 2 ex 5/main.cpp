#include <iostream>

using namespace std;
int v[100][100],a[100];
int main()
{

int i=0,j=0,n,k=0;

cin>>n;


for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(i=0;i<n;i++)
{
    if(i%2==0)
    {
        for(j=n-1;j>=0;j--)
        {
            v[j][i]=a[k];
            k++;

        }
        k=0;

    }
    else
    {

        for(j=0;j<=n-1;j++)
        {
            v[j][i]=a[j];
        }

    }
}


for(i=0;i<n;i++)
{

    for(j=0;j<n;j++)
{
    cout<<v[i][j]<<" ";

}
cout<<endl;
}




    return 0;
}

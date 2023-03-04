#include <iostream>

using namespace std;

int main()
{int i,j,a[21][21],n;

cin>>n;

for(i=0;i<n;i++)
    for(j=0;j<n;j++)
{
    if(i-j>=0) a[i][j]=i-j;
    else a[i][j]=j-i;
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}



    return 0;
}

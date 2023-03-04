#include <iostream>

using namespace std;
int a[50][50],i,j;
int main()
{

for(i=0;i<4;i++)
    for(j=0;j<5;j++)
{
    if(i+j==1 || i+j==4) a[i][j]=1;
     if(i+j==2 || i+j==5) a[i][j]=2;

     a[3][4]=1;
}

for(i=0;i<4;i++)
{
    for(j=0;j<5;j++)
    {
        cout<<a[i][j]<<" ";
    }
cout<<endl;
}

    return 0;
}

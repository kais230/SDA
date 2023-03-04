#include <iostream>

using namespace std;

int main()
{int x[50][50],i,j,a,b,c;


a=1; b=0;
for (i=4; i>=1; i--)
    for (j=4; j>=i; j--)
    { x[i][j]=a+b;
      c=x[i][j];
      x[j][i]=c;
      a=b; b=c; }


for(i=1;i<=4;i++)
{
    for(j=1;j<=4;j++)
    {
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}

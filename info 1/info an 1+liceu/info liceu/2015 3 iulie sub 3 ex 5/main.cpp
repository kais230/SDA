#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int a[21][21];
int main()
{int i,n,j;

    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>a[1][i];
    }

    for(i=2;i<=n;i++)
    {
        a[i][1]=a[i-1][n];
        for(j=2;j<=n;j++)
    {
        a[i][j]=a[i-1][j-1];

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

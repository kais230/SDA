#include <iostream>

using namespace std;
int a[50][50];

int main()
{int i,j;

for(i=1;i<=5;i++)
    for(j=1;j<=5;j++)
{
    if(i==1 || j==1) a[i][j]=4;
    if((i==2 || j==2) && ( a[i][j]==0)) a[i][j]=3;
    if((i==3 || j==3) && ( a[i][j]==0)) a[i][j]=2;
    if((i==4 || j==4) && ( a[i][j]==0)) a[i][j]=1;

}
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    cout<<a[i][j]<<" ";
      cout<<endl;

  }
    return 0;
}

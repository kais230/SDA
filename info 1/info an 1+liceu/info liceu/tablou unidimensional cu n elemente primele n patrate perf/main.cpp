#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n,v[100],i,cn ;

cin>>n;
cn=1;
i=0;
while(cn<=n)
{
  if((int)sqrt(i)*(int)sqrt(i)==i && i%2==0) {v[cn]=i;cn++;};

  i++;
}
for(i=1;i<=n;i++)
    cout<<v[i]<<" ";



    return 0;
}

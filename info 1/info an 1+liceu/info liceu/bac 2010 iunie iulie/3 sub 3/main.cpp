#include <iostream>

using namespace std;
void tablou(int n,int k,int a[100])
{int i=1,j=1;

while(j<=n*k)
{
    a[j]=i;
if(j%k==0) i++;

j++;
}
for(i=1;i<=n*k;i++)
    cout<<a[i]<<" ";
}

int main()
{int n,k,a[100];

cin>>n>>k;
tablou(n,k,a);



    return 0;
}

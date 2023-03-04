#include <iostream>

using namespace std;


void dublu( int v[50],int &n)
{int i,j;


 for(i=1;i<=n;i++)
 {
     if(v[i]>0)
     { n++;
         for(j=n;j>i;j--)
          v[j]=v[j-1];

       v[i+1]=v[i];
       i++;
     }
 }


}



int main()
{int nr,a[50],i;


cin>>nr;

for(i=1;i<=nr;i++)
    cin>>a[i];

   dublu(a,nr);

    for(i=1;i<=nr;i++)
    cout<<a[i];








    return 0;
}

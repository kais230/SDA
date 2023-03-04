#include <iostream>

using namespace std;

int FLIP(int n,int x[50],int a,int b)
{ int aux;
    while(a<b)
    {
        aux=x[a];
        x[a]=x[b];
        x[b]=x[a];
        a++;
        b--;
    }
}

int main()
{

    int i, j,v[50],n;
cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>v[i];
   }

    for (i = 1; i < n; i++)
    for (j = 1; j < n-i; j++)
        if (v[j] > v[j+1])
            FLIP(n,v,i,j);


  for(i=1;i<=n;i++)
   {
       cout<<v[i];
   }




    return 0;
}

#include <iostream>

using namespace std;

void remove_even(int v[100],int n)
{
 int i,j,ok=0;
 for(i=0;i<n;i++)
 {
     if(v[i]%2==0)
     {
         for(j=i;j<n;j++)
         {
             v[j]=v[j+1];
         }
         i--;n--;
     }
     else ok=1;
 }

 if(ok==1)
 {


 for(i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
cout<<endl<<n;
 }
 else cout<<0;

}



int main()
{int x[100],nr,i;

cin>>nr;
for(i=0;i<nr;i++)
{
    cin>>x[i];
}

remove_even(x,nr);



    return 0;
}

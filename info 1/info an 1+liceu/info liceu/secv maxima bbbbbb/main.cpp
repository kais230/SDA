#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int v[10],a[10];
int main()
{
int x,y,k=0,kmax=0,i,j;



while(f>>y)
{
if(y<10)
{
v[y]++;
k++;

}
 if(k>kmax) kmax=k;
 {
     for(i=0;i<=9;i++)
        a[i]=v[i];
 }

 if(y>=10)
 {
     k=0;
     for(i=0;i<=9;i++)
        v[i]=0;
 }


}
for(i=9;i>=0;i++)
{
    if(a[i]>0)
    {j=a[i];
      while(j!=0)
      {
        cout<<i<<" ";
        j--;
      }
    }
}








    return 0;
}

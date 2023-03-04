#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int v[101];
int main()
{int x,k=0,i,a,b;
v[88]=1;
v[77]=1;
v[66]=1;
v[55]=1;
v[44]=1;
v[33]=1;
v[22]=1;
v[11]=1;

while(f>>x)
{
    if(x<100) v[x]=1;
}


for(i=98;i>=10;i--)
{
 if(k==1 && v[i]==0) {b=i;k++;break;}
    if(k==0 && v[i]==0) {a=i;k++;}




    }
    if(k<2) cout<<"nu exista";
    else cout<<a<<" "<<b;
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;
ifstream f("intervale5.in");
ofstream g("intervale5.out");
int v[101];
int main()
{int k=0,i,c,x;

while(f>>x)
{
    v[x]=1;

}
i=0;
while(i<=100)
{
   if(v[i]==1 && v[i+1]!=1)
   {   c=i+1;
       while(v[c]==0 && c<101)
       {
           c++;
       }
       if(c<101)
       g<<i<<" "<<c<<endl;
       i=c;
   }
   else i++;

}

    return 0;
}

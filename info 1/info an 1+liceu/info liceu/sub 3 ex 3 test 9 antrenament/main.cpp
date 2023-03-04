#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.txt");

int v[11];
int main()
{
int x,i;

while(f>>x)
{
    cout<<x<<endl;
   while(x!=0)
   {
       v[x%10]++;
       x=x/10;
   }
}

for(i=9;i>=0;i--)
{

    while(v[i]!=0)
    {
        cout<<i;
        v[i]--;
    }
}







    return 0;
}

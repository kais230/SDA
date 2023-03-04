#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int v[11];
int main()
{
int x,i;

while(f>>x)
{
    v[x]++;
}

for(i=0;i<=8;i++)
{
    if(v[i]!=0 && i%2==0)
    {
        while(v[i]!=0)
        {
            cout<<i<<" ";
            v[i]--;
        }
    }
}


    return 0;
}

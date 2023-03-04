#include <iostream>
#include <fstream>
using namespace std;
ifstream f("afisarefii.in.txt");
ofstream g("afisarefii.out");
int nr_fii(int n,int v[100],int x)
{int s=0,i;
    for(i=1;i<=n;i++)
    {
       if(v[i]==x) s++;
    }
    return s;
}
void afisare_fii(int n,int v[100],int x)
{int i;
     for(i=1;i<=n;i++)
    {
       if(v[i]==x) g<<i<<" ";
    }
}

int main()
{int v[100],i,n,k,x;

f>>n;

for(i=1;i<=n;i++)
{
    f>>v[i];
}
f>>k;
for(i=1;i<=k;i++)
{
    f>>x;
    g<< nr_fii(n,v,x)<<" ";
    afisare_fii(n,v,x);
    g<<endl;

}




    return 0;
}

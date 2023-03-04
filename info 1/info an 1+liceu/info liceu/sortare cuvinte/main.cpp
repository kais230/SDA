#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("sortcuv.in");
ofstream g("sortcuv.out");
int main()
{char s[251],*p,a[251][21],aux[21];
int n=0,i,j;
f.get(s,251);
p=strtok(s," ");

while(p)
{n++;
strcpy(a[n], p);
p=strtok(NULL, " ");

}

for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
{
    if(strcmp(a[i],a[j])>0)
    {
        strcpy(aux,a[i]);
        strcpy(a[i],a[j]);
        strcpy(a[j],aux);
    }
}
for(i=1;i<=n;i++)
{
    g<<a[i]<<endl;
}
    return 0;
}

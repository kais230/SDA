#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s[256],*p;
int i=0,n,ok,k;
cin.get(s,256);

k=strlen(s);
while(i<k)
{p=strtok(s+i," ");
n=strlen(p);
ok=1;
i=i+n;
    while(n>0)
    {if(strchr("aeiou",p[n])==0) ok=0;
     n--;

    }

i++;
if(ok==1) cout<<p<<endl;
p=strtok(NULL," ");
}

    return 0;
}

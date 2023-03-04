#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s[101],*p;
int ok,n=0;

cin.get(s,101);
p=strtok(s," ");

while(p)
{ ok=0;
    if(strstr(p,"DO")&& ok==0) {cout<<p<<endl;ok=1;};
    if(strstr(p,"RE")&& ok==0){cout<<p<<endl;ok=1;};
    if(strstr(p,"MI")&& ok==0){cout<<p<<endl;ok=1;};
    if(strstr(p,"FA")&& ok==0){cout<<p<<endl;ok=1;};
    if(strstr(p,"SOL")&& ok==0){cout<<p<<endl;ok=1;};
    if(strstr(p,"LA")&& ok==0){cout<<p<<endl;ok=1;};
    if(strstr(p,"SI")&& ok==0){cout<<p<<endl;ok=1;};
    if(ok==1) n=1;
    p=strtok(NULL," ");
}
if(n!=1) cout<<"nu exista";


    return 0;
}

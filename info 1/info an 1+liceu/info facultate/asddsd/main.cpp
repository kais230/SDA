#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ofstream g("atestat.out");

int main()
{int i,n,k=0;
char c,s[71],*p;


cin.get(s,71);

n=strlen(s);



for(i=0;i<n;i++)
{
    if(strchr("aeiou",s[i])) cout<<char(s[i]-32);
    else cout<<s[i];
}
c=s[n-1];

for(i=0;i<=n;i++)
{
    if(c==s[i]) k++;
}
cout<<endl<<k<<endl;


p=strtok(s," ");

while(p)
{
 if(strchr("aeiou",p[strlen(p)-1])==0) g<<p<<" ";

 p=strtok(NULL," ");


}



    return 0;
}

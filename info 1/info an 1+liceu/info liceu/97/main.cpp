#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s1[21], s2[21];
int i,n,k=0;

cin>>s1;
cin>>s2;
n=strlen(s1);
if(strlen(s1)!=strlen(s2)) cout<<0;
else
{
for(i=0;i<n;i++)
{
    if(strchr(s2,s1[i])) k++;
}
if(k==n) cout<<1;
else cout<<0;


}
    return 0;
}

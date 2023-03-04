#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char c,s[101];
int M,n,i;
cin>>M;
cin>>s;
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]+M>'z') cout<<char(s[i]+M-26);
    else cout<<char(s[i]+M);
}
    return 0;
}

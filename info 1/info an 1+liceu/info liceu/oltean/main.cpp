#include <iostream>
#include <string.h>
using namespace std;

int main()
{

char s[100],a[100];
int v[50],i;

cin>>s;

for(i=1;i<=strlen(s);i++)
    cin>>v[i];

strcpy(a,s[0]);

for(i=1;i<=strlen(s);i++)
{
    if(v[i]%2==0)
    {
   a=strcat(s[i],a);
    }
    else a=strcat(a,s[i]);

}
cout<<a;
    return 0;
}

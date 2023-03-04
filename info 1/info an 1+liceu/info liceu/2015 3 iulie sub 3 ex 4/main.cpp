#include <iostream>
#include <string.h>
using namespace std;

int main()
{
int i;
char a[30],b[30];
cin>>b;
for(i=0;i<=strlen(b)/2-1;i++)
{
    a[i]=b[i];
}


cout<<a;
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s[256];
 int i,k=0;
cin.get(s,256);

 for(i=0;i<strlen(s)-1;i++)
    if(strchr("AEIOUaeiou",s[i])!=0)
 {
     if(s[i+1]!=' ' && s[i-1]!=' ' && strchr("AEIOUaeiou",s[i-1])==0 && strchr("AEIOUaeiou",s[i+1])==0) {k++;i++;};
 }


cout<<k;
    return 0;
}

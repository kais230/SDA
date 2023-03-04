#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256];
    cin.get(s,256);
    if(s[0]!=' ') s[0]-=32;
    if(s[strlen(s)-1]>='a' && s[strlen(s)-1]<='z')s[strlen(s)-1]-=32;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
            s[i+1]-=32;
        if(s[i]==' ' && s[i-1]>='a' && s[i-1]<='z')
            s[i-1]-=32;
    }
    cout<<s;
    return 0;
}

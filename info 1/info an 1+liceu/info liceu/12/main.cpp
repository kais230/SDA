#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char s[256];
int i;
cin.get(s,256);

if(s[0]!=' ') s[0]=s[0]-32;

for(i=1;i<strlen(s);i++)
{
    if(s[i+1]==' '&& s[i]!=' ')s[i]=s[i]-32;
    if(s[i-1]==' '&& s[i]!=' ') s[i]=s[i]-32;
}
if(s[i-2]!=' ') s[i-1]=s[i-1]-32;

cout<<s;
    return 0;
}
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s[256], *p, aux[256];
    cin.get(s, 256);

    strcpy(aux, s);
    p = strtok(s, " ");
    while (p != NULL)
    {
        aux[p - s] -= 32;
        if (strlen(p) > 1)
            aux[p - s + strlen(p) - 1] -= 32;
        p = strtok(NULL, " ");
    }
    cout << aux;
    return 0;
}

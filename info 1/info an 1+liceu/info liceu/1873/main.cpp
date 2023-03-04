#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    char s[101], *p,aux[101];
    int ok=0,n=0;
    cin.get(s, 101);
    p = strtok(s, " ");
    while (p)
    {
        if (strlen(p)%2==0)
        {
            strcat(aux,"# ");
            ok=1;
        }
       else strcat(aux,p);
       p=strtok(NULL," ");
       if(ok==1) n=1;
    }
    if(n==1) cout<<aux;
    else cout<<"nu exista";
    return 0;
}

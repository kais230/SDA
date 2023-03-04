#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char aux[256],s[256],*p;
    cin.get(s,256);




    strcpy(aux,s);
    p=strtok(s," ");
    while(p!=NULL)
    {
        p[0]-=32;
        p[strlen(p)-1]-=32;
        cout<<p<<" ";
        p=strtok(NULL," ");
    }

    return 0;
}

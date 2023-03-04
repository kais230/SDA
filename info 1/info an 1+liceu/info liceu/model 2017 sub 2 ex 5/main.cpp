#include <iostream>
#include <string.h>
using namespace std;

int main()
{

char s2[100],s[101],*p;
int ok=0;

cin.get(s,100);

p=strtok(s," ");

while(p)
{
    if(strlen(p)%2==0)
    {
        ok=1;
        strcat(s2,"# ");
    }
    else {strcat(s2,p);strcat(s2," ");}
    p=strtok(NULL," ");
}
strcpy(s,s2);
cout<<s;
    return 0;
}

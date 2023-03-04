#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream f("in.txt");
char aux[256];
int main()
{char s[256],*p;

f.get(s,256);

p=strtok(s," ");
strcat(aux,p);
strcat(aux," ");

while(p)
{
if (strchr(p,'.') ==0)
{
 strcat(aux,p);
strcat(aux," ");
}
p=strtok(NULL," ");
}

cout<<aux;
    return 0;
}

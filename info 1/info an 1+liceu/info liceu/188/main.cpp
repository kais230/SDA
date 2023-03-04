/*#include <iostream>
#include <string.h>

using namespace std;
char aux[101];
int main()
{
char a[11], b[11], s[101], *p;

cin.get(a,11);
cin.get();
cin.get(b,11);
cin.get();
 cin.get(s,101);

p=strtok(s," ");
while(p)
{
    if(strcmp(p,a)==0) {strcat(aux,b);strcat(aux," ");}
    else if(strcmp(p,b)==0) {strcat(aux,a);strcat(aux," ");}
    else {strcat(aux,p);strcat(aux," ");}

p=strtok(NULL," ");
}
cout<<aux;
    return 0;
}
*/
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
ifstream f("inlocuirecuvant.in");
ofstream g("inlocuirecuvant.out");
char aux[101];
int main()
{
char a[11], b[11], s[101], *p;

f>>a;
f.get();
f>>b;
f.get();
f.get(s,101);

p=strtok(s," ");
while(p)
{
    if(strcmp(p,a)==0) {strcat(aux,b);strcat(aux," ");}
    else {strcat(aux,p);strcat(aux," ");}

p=strtok(NULL," ");
}
strcpy(s,aux);
g<<s;
    return 0;
}

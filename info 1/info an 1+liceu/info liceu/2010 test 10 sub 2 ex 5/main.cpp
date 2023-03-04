#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s[101],*p,a[101]="";

cin.get(s,101);

p=strtok(s," ");

while(p)
{
 if(strchr(p,'.')==0){strcat(a,p);strcat(a," ");}
 else strcat(a," ");


  p=strtok(NULL," ");

}
strcpy(s,a);

cout<<s;

    return 0;
}

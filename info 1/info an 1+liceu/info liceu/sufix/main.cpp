#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s[256],*p,aux[256],sol[256]="" ;
cin.get(s,256);

p=strtok(s,"*");
strcpy(aux,p);

while(p)
{
  if(strlen(p)>=strlen(aux))
  {
      if(strcmp(aux,p+strlen(p)-strlen(aux))!=0)
      strcat(sol,p);
  }
  else strcat(sol,p);
 strcat(sol,"*");

 p=strtok(NULL,"*");

}
cout<<sol;

    return 0;
}

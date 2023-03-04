#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char s[101],*p,maxim='0',nr[101];

cin.get(s,100);

p=strtok(s," ");

while(p)
{
if(p[0]>='0' && p[0]<='9' && p[0]>=maxim)
{
    maxim=p[0];
    strcpy(nr,p);

}
p=strtok(NULL," ");
}
if(maxim==0) cout<<"nu exista";
else cout<<nr;



    return 0;
}

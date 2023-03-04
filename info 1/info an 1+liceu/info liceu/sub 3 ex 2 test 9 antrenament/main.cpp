#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char  s[100], *p;
int k=0;
cin.get(s,100);
p=strtok(s," ");

while(p)
{
  if(strchr(p,'a')!=0) k++;
  if(strchr(p,'e')!=0) k++;
  if(strchr(p,'i')!=0) k++;
  if(strchr(p,'o')!=0) k++;
  if(strchr(p,'u')!=0) k++;

    if(k==1) cout<<p<<endl;

    p=strtok(NULL," ");
    k=0;

}









    return 0;
}

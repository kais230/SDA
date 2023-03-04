#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char x[21],s[401]="",s1[401]="",s2[401]="",*p;
int n,k,i;
cin>>n;


for(i=1;i<=n;i++)
{
    cin>>x;
    strcat(s,x);
    strcat(s," ");

}


p=strtok(s," ");
cin>>k;

while(p)
{
     if (strlen(p)==k) {strcat(s1,p);strcat(s1," ");}
    else {strcat(s2,p);strcat(s2," ");}

  p=strtok(NULL," ");
}


strcat(s1,s2);
cout<<s1;




    return 0;
}

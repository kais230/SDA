#include <iostream>
#include <string.h>
using namespace std;

int main()
{int i,j,n;
char s[100],*p,x[100],sf[100]="";
cin.get(s,100);
p=strtok(s," ");

while(p)
{

    if(strlen(p)%2==1)
    {

         strcpy(x,p);
       i=0;j=strlen(x)-1;
            while(i<j)
            {
                char aux=x[i];
               x[i]=x[j];
                x[j]=aux;
                i++;
                j--;
            }

        strcat(sf,x);
        strcat(sf," ");


    }
else
{   strcat(sf,p);
    strcat(sf," ");
}
p=strtok(NULL," ");
}

strcpy(s,sf);
cout<<s;
    return 0;
}

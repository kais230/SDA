#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char s[100],*p,a[100][100],aux[100];
    int i=0,j=0,k,ok=0;

    cin.get(s,100);

    p=strtok(s," ");

    while(s)
    {

     if(strlen(p)%2!=0)
     {
         strcpy(aux,p+strlen(p)/2);
         strcpy(p+strlen(p)/2+1,aux);

     }
      strcpy(a[i],p);
     p=strtok(NULL," ");
     i++;
    }

   k=i;
     for(int i=1; i<k; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if(strcmp(a[i],a[j])==0)
                {
                    ok=1;
                }
            }
    }

    if(ok==1) cout<<"DA";
        else cout<<"NU";



    return 0;
}

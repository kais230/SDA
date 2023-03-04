#include <string.h>
#include <iostream>
using namespace std;

int separ(char i)
{
    if((int)i<32) return 0;
if(i>='a' && i<='z' || i>='A' && i<='Z')
    return 1;
else return 0;
}
int main()
{
    char s[256],*p,a[101][101];
    cin.get(s,256);
    p=strtok(s," ");
    int n=0,i,j;
    while(p)
    {
       if(separ(p[0])!=0)
       {n++;
       for(i=0;i<strlen(p);i++)
        if(separ(p[i])==0)
       {
           strcpy(p+i,p+i+1);
           i--;
       }
       strcpy(a[n],p);}
       p=strtok(NULL," ");
    }
    i=1;j=n;
    while(i<=j)
    {
        cout<<a[i]<<endl;
        i++;
        cout<<a[j]<<endl;
        j--;
    }

}

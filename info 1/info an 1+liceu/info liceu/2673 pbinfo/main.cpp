#include <iostream>
#include <string.h>
using namespace std;

int main()
{char s[256], *p,*c, aux[]=" `1234567890-=~!@#$%^&*()_+[]\{}|;':,./<>?";
int i,j,n;
cin.get(s,256);

for(i=0;i<strlen(s);i++)
    for(j=0;j<strlen(s);j++)
{
    if(s[i]=aux[j]) n=i;
}
c= strtok(s+i ,NULL);
cout<<c;
//p= strtok(s," `1234567890-=~!@#$%^&*()_+[]\{}|;':,./<>?");

/*while(p && c)
{


    p= strtok(s," `1234567890-=~!@#$%^&*()_+[]\{}|;':,./<>?");
}
*/
//cout<<p;
//cout<<c;


    return 0;
}

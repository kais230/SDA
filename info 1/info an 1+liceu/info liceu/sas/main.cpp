#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char s[100];
int i,j;



strcpy(s,"calculatoare");
i=0; j=strlen(s);
while(j>i){
 j=j-i;i++;
}

cout<<strchr(s,s[i]) -s+1;


    return 0;
}

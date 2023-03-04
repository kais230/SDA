#include <cstring>
#include <iostream>
using namespace std;
//cel mai mare cuv dpdv lexicografic, au maxim 10 caractere
int main()
{
    char s[11],maxim[11]="aaaaaaaaaa";
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(strcmp(s,maxim)>0)
            strcpy(maxim,s);
    }
    cout<<maxim;
    return 0;
}

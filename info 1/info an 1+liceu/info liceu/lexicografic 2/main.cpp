#include <cstring>
#include <iostream>
using namespace std;
//cel mai mare cuv dpdv lexicografic, au maxim 10 caractere
int main()
{
    char s[101][11],maxim[11]="aaaaaaaaaa";
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<=n;i++)
        if(strcmp(s[i],maxim)>0)
        strcpy(maxim,s[i]);
    cout<<maxim;
    return 0;
}

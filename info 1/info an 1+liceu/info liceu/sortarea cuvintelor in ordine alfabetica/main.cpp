#include <cstring>
#include <iostream>
using namespace std;
//sa se sorteze alfabetic, au maxim 10 caractere
int main()
{
    char s[101][11],aux[11];
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
        if(strcmp(s[i],s[j])>0)
    {
        strcpy(aux,s[i]);
        strcpy(s[i],s[j]);
        strcpy(s[j],aux);
    }
    for(i=1;i<=n;i++)
        cout<<s[i]<<"  ";
    return 0;
}

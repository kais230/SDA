#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256],a[16][256];
    int n,k=0;
    cin>>n; cin.get();
    for(int i=1;i<=n;i++)
    {
        cin.get(s,256); cin.get();
        for(int j=0;j<strlen(s)-1;j++)
            if(strchr("?.,!",s[j])!=0)
        {
            strcpy(s+j,s+j+1);
            j--;
        }
        //cout<<s<<endl;
        k++;
        strcpy(a[k],s);
    }
    for(int i=1;i<=k;i++)
        cout<<a[i]<<endl;
    return 0;
}

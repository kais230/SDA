#include <iostream>

using namespace std;

int main()
{
int n,v[1500],v2[1500],k,i,ok=0;

cin>>n;


for(i=0;i<n;i++)
{
    cin>>v[i];
}

for(i=0;i<n;i++)
{
    if(v[i]!=v[i+1]-1 && v[i]!=v[i-1]+1) {v2[k]=v[i];k++;}
    else ok++;


}

if(ok==n) cout<<-1;
else
{
    for(i=0;i<k;i++)
    {
        cout<<v2[i]<<" ";
    }
}



    return 0;
}

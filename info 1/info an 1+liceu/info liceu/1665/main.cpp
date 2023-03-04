#include <iostream>

using namespace std;

int main()
{
    int i=1,n,x,k,ok=0;

    cin>>n;
    cin>>x;


    while(n!=0)
    {
        cin>>k;
        if(k>x) i++;
        if(k==x) ok=1;

        n--;
    }
if(ok==1)
    cout<<i;

else cout<<-1;

    return 0;
}

#include <iostream>

using namespace std;

int factori(int n,int m)
{int kn,km,cn,cm,i;

for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {

        cn=n;
        while(cn%i==0)
    {
        cn=cn/i;
        kn++;
    }
    }
    if(m%i==0)
    {

        cm=m;
    while(cm%i==0)
    {
        cm=cm/i;
        km++;
    }
    }
    if(kn==km) cout<<i
}




}








int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

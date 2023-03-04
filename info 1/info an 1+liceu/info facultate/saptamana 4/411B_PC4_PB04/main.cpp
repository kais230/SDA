#include <iostream>

using namespace std;

int main()
{
    unsigned n,inv=0;
    int k=31;
    cin>>n;
    unsigned cn=n;
    while(k>0)
    {
        inv=inv|(cn&1);
        cn=cn>>1;
        inv=inv<<1;
        k--;
    }
    inv = inv | (cn & 1);

    cout<<inv;







    return 0;
}

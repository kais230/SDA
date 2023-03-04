#include <iostream>

using namespace std;

int sumcif(int n)
{
    if(n==0) return n;
    else return n%10+sumcif(n/10);
}


int main()
{
    int x=234567890;
    cout<<sumcif(x);
    return 0;
}

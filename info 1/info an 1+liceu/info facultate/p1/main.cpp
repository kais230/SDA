#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int i,n,x;
int ma=0;
cin>>n;

for(i=1;i<=n;i++)
{
    cin>>x;
    ma=ma+x;
}
ma=ma*100;
ma=ma/n;

cout<<fixed<<setprecision(2)<<(float)ma/100;






    return 0;
}

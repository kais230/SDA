#include <iostream>

using namespace std;





int main()
{int x,i;
cin>>x;

while(x>10)
{
    cout<<x<<" ";
    if(x%2!=0) x--;
    else x=x/2;
}
for(i=x;i>=1;i--)
    cout<<i<<" ";

    return 0;
}

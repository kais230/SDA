#include <iostream>

using namespace std;


int main()
{
    int x;
    cin>>x;
    while(x>1)
    { g<<x<<" ";
        if(x%2!=0){x=(x-1)/2;x=x+1;}
        else{x=x-1;}
    }
        g<<1;

    return 0;

}

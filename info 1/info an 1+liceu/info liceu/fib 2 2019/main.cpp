#include <iostream>

using namespace std;

int main()
{
    int x,y,z,c;
    cin>>x>>y>>z;
    while(z>4)
    {
        cout<<z<<" ";
        c=x+y-z;
        z=y;
        y=x;

        x=c;
    }
    cout<<"4 2 1";
    return 0;
}

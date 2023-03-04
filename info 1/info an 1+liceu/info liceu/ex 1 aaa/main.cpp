#include <iostream>

using namespace std;

int main()
{int x,y,z;
cin>>y;
cin>>x;


cout<<y<<" "<<x;
while(x>=1)
{
   z=6*x-y;
   cout<<z<<" ";
   y=x;
   x=z;


}




    return 0;
}

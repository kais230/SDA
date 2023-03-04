#include <iostream>

using namespace std;

int main()
{int n,z=1,x=5,y,i;

cin>>n;

for(i=3;i<=n;i++)
{
    y=6*x-z;
    z=x;
    x=y;
}
x=z;
cout<<y<<" "<<x<<" ";


while(x>1)
{
   z=6*x-y;
   cout<<z<<" ";
   y=x;
   x=z;


}





    return 0;
}

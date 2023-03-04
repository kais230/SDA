#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{

int n,x,max1,max2;
f>>n;
max1=4;
while(n!=0)
{
    f>>x;
    if(x%10==5)
    {if(x>max1 ) {max2=max1; max1=x;}
      else if(x>max2 && x<max1) max2=x;
    }
    n--;

}
cout<<max1<<" "<<max2;



    return 0;
}

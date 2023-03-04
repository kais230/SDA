#include <iostream>
using namespace std;

int suma(int n)
{int s=1,i,j,d=0;

for(i=4;i<=n;i++)
 {
    if(n%i==0)
    {
        d=0;
        for(j=2;j<=i/2;j++)
        {

        if(i%j==0) d++;
        }
        if(d!=0) s=s+i;
    }

 }

    return s;


}

int main()
{

cout<<suma(12);

    return 0;
}

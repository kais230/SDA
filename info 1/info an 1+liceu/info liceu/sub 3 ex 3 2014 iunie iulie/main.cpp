#include <iostream>

using namespace std;
int interval(int n, int a,int b)
{int i;
    a=1;
    b=1;
    for(i=1;i<n;i++)
        a=a*i;



   for(i=1;i<=n+1;i++)
        b=b*i;

        a=a+1;
        b=b-1;
        cout<<a<<" "<<b;
}



int main()
{int a,b;
interval(3,a,b);

    return 0;
}

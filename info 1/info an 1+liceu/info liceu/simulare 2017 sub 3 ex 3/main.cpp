#include <iostream>

using namespace std;

int ranguri(int n)
{int c=0,s=0;
    while(n!=0)
    {
       if(n%10==c) s++;
       c++;
       n=n/10;
    }
    return s;
}



int main()
{
    cout << ranguri(6594270);
    return 0;
}

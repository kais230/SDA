#include <iostream>

using namespace std;
void duplicare(int &n)
{
    int x=0,p=1;
    while(n>0)
    {
        if(n%10%2==0)
        {
            x=x+n%10/2p;
            p=p10;
            x=x+n%10p;
            p=p10;
        }
        else
        {
            x=x+n%10p;
            p=p10;
        }
        n=n/10;
    }
    n=x;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

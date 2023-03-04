#include <iostream>
#include <fstream>
using namespace std;

ofstream g("bac.out");
int main()
{
    int p1,p2;
    cin>>p1>>p2;
    for(int i=1; i<=9999999; i++)
    {
        if(((i%10)*(i/10%10)==p2))
        {
            if(((i/100%10)==(i/1000%10))&& ((i/1000%10)==(i/10000%10)))
            {
                if((i/100000%10)*(i/1000000)==p1)
                {
                    g<<i<<endl;
                }
            }
        }
    }

}

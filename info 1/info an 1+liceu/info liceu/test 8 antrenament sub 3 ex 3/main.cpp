#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
int x,y=0,z=0,ok=0;

while(f>>x)
{
    if(x%2==1)
    {
        y=z;
        z=x;
    }


}
if(y!=0 && z!=0) cout<<y<<" "<<z;
else cout<<"nu exista";




    return 0;
}

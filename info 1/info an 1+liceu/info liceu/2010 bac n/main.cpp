#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int main()
{
int x,aux;

aux=-1;
while(f>>x)
{
 if (x%2==0&&x!=aux)
  cout<<x<<" ";
   aux=x;
}



return 0;
}



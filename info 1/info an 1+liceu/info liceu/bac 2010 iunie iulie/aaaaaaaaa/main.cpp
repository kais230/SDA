#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{int x,y,s=1;

f>>x;
y=x;

while(f>>x)
{
   if(x==y) s++;
   else {cout<<y<<" "<<s<<" ";s=1;}

   y=x;


}

cout<<y<<" "<<s;

    return 0;
}

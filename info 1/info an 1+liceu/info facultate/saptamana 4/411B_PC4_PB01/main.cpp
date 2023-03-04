#include <iostream>

using namespace std;


int TipuriDeDate(int a, float b,float c,double d,long long e)
{
  b=b/c;
if(b==d) a=b*e;
else a=c*e;

return a;
}


int main()
{

int a;
 float b;
 float c;
 double d;
 long long e;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;


cout<<TipuriDeDate(a,b,c,d,e);


    return 0;
}

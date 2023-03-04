#include <iostream>

using namespace std;

void imog(int x,int y, int &rez)
{int a=0,b=0;

 while(x)
 {
   if(x%2==1)
    a=a*10+x%10;
     x=x/10;

 }

 while(y)
 {
      if(y%2==1)
    b=b*10+y%10;
     y=y/10;
 }

 while(b)
 {
     y=y*10+b%10;
     b=b/10;
 }
b=y;
if(a==b && a!=0 && b!=0) rez=1;
else rez=0;

}



int main()
{

int r=2;


imog(4352,8576,r);

cout<<r;


    return 0;
}

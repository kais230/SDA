#include <iostream>
#include <math.h>
using namespace std;


int circular(int a,int b)
{
    int ca,cb,s1=0,s2=0,x,i=1;

    ca=a;
    cb=b;

    while(ca>0)
    {
        ca=ca/10;
        s1++;
    }
     while(cb>0)
    {
        cb=cb/10;
        s2++;
    }

    if(s1!=s2) return -1;

    while(i<=s2)
    {
            a=a%10*pow(10,s1-1) + a/10;

        if(a==b) return i;
      i++;


    }

    return -1;

}






int main()
{

cout<<circular(732,237);





    return 0;
}

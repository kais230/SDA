#include <iostream>

using namespace std;

void identice(int a,int b)
{
    int i,x,ok=1,c;
    for(i=a;i<=b;i++)
    {
        x=i;
        c=x%10;
        ok=1;
        while(x>9)
        {x=x/10;
         if(c!=x%10) ok=0;
        }
        if(ok==1) cout<<i<<" ";
    }




}


int main()
{
identice(700,1500);


    return 0;
}

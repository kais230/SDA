#include <iostream>

using namespace std;
int resturi(int r, int x, int y, int n)
{
    int s=0,i;


    for(i=1;i<=n;i++)
    {
        if(i%x==r && i%y==r) s++;
    }

    return s;


}
int main()
{

int n=200,x=5,y=14,r=2;

cout<<resturi(r,x,y,n);






    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int a[100][101];
void main()
{


int x,ct=0,maxim=0,i;
    while(f>>x)
    {ct++;
    if(x<100) x=x/10;
     while(x>100)
     {
         x=x/10;
     }

        a[1][x%10]++;
        if(a[1][x%10]>=maxim)maxim=a[1][x%10];
        a[2][x%10]=ct;
    }


    for( i=1;i<=ct;i++)
    {
        if(a[1][i]==maxim)cout<<a[2][i]<<" ";
    }















}

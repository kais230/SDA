#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{
int x,y,ct=1;
    f>>x;
    while(f>>y)
    {
        if(x>y)ct++;
    }
    cout<<ct;    return 0;
}

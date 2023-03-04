#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{
    int v[10001],x,ct=1,max1=0,ct2;
    while(f>>x)
    {
        if(x%2!=0)ct=0;
        else
        {
            ct++;
            if(max1<ct)
            {
                max1=ct;
                ct2=1;
            }
            else if(max1==ct)ct2++;
        }
    }
    cout<<ct2;

}

#include <iostream>

using namespace std;

int armonie(int x, int y)
{
    int s1=0,s2=0,s=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0){s1=s1+i;}
    }
    for(int i=1;i<=y;i++)
    {
        if(y%i==0){s2=s2+i;}
    }
    s=x+y;
    if(s<=s2 && s>=s1)return 1;
    else return 0;

}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

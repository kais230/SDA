#include <iostream>

using namespace std;


int v(int n)
{
    int i=0,sp=0,si=0;
    while(n)
    {
        if(i%2==0)
        {
            sp=sp+n%10;
        }
        else{si=si+n%10;}

        n=n/10;
        i++;
    }



if(sp%2==0 && si%2==1) return 1;
else return 0;
}



int main()
{
    int n;

    cin>>n;



cout<<v(n);
    return 0;
}

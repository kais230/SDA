#include <iostream>

using namespace std;

int kpn(int a,int b,int k)
{int s=0,ct=0,i,d;

    for(i=a;i<=b;i++)
    {

        for(d=1;d<=i;d++)
        {
            if(i%d==0) s=s+d;
        }
       if(s%2==i%2) ct++;

       if(ct==k) {return i;}
     s=0;
    }

return -1;

}


int main()
{
    cout<<kpn(27,50,3);
    return 0;
}

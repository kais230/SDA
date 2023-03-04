#include <iostream>

using namespace std;
int cmmdc(int a,int b)
{
    int r;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int main()

{int n,i,j,s=0;

cin>>n;


for(i=1;i<=n;i++)
{


    for(j=i;j<=n;j++)

 if(cmmdc(i,j)==1) s++;
}

    cout<<s;

    return 0;
}

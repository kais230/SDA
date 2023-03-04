#include <iostream>

using namespace std;



int v[10000];

int inter(int na,int a[100],int nb,int b[100])
{int i,s=0;
    for(i=1;i<=na;i++)
    {
        v[a[i]]++;
    }

     for(i=1;i<=nb;i++)
    {
        v[b[i]]++;
    }

    for(i=1;i<=9999;i++)
    {
        if(v[i]==2) s++;
    }

    return s;

}



int main()
{int a[100],b[100],na,nb,i;
cin>>na;
for(i=1;i<=na;i++)
    cin>>a[i];

cin>>nb;
for(i=1;i<=nb;i++)
    cin>>b[i];

cout<<inter(na,a,nb,b);





    return 0;
}

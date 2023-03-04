#include <iostream>

using namespace std;

int main()
{
int s1,s2,i,j,k;
cin>>s1;
cin>>s2;
/*
for(i=10001;i<=99999;i++)
{
    if(s1==i/10000+i/1000%10 &&  s2==i%10+i/10%10) cout<<i<<" ";

     cout<<i<<" ";
}
*/

for(i=1;i<=9;i++)
    for(j=0;j<=9;j++)
    for(k=0;k<=9;k++)
{
    if(s1-i>=0 && s1-i<=9 && s2-j>=0 && s2-j<=9)  cout<<i<<s1-i<<k<<j<<s2-j<<" ";
}

    return 0;
}

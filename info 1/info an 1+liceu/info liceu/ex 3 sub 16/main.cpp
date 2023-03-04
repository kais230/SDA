#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{ int i=1,j=1,n,m,v1[100],v2[100],x;
   f>>n;
   f>>m;
   while(i<=n)
    {
        f>>v1[i++];
    }
     while(j<=m)
    {
        f>>v2[j++];
    }
    i=1;j=1;
    if(v1[i]<v2[j]){x=v1[i++];cout<<x<<" ";}
    else {x=v2[j++];cout<<x<<" ";}
    while(i<=n && j<=m)
    {  if(v1[i]<v2[j])
    {
        if(v1[i]%2!=x%2){x=v1[i];cout<<v1[i++]<<" ";}
        else i++;
    }
    else
    {
        if(v2[j]%2!=x%2){x=v2[j];cout<<v2[j++]<<" ";}
        else j++;
    }
    }
    while(i<=n)
    {
        if(v1[i]%2!=x%2){x=v1[i];cout<<v1[i++]<<" ";}
        else i++;
    }
    while(j<=m)
    {
        if(v2[j]%2!=x%2){x=v2[j];cout<<v2[j++]<<" ";}
    }
}

#include <iostream>
using namespace std;

int v[100];

int main()
{
    int n, a, b, i, j, mid;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> a >> b;
    if(a>b)
    {
        ...
    }

    i=0;j=n-1;nr=-1;
    while(i<=j)
    {
        mij=(i+j)/2;
        if(v[mij]>=a && v[mij]<=b) {nr=v[mij];j=mij-1;}
        else if(v[mij]<a) j=mij-1;
        else i=mij+1;
    }
    if(nr==-1) cout<<"nu exista";
    else cout<<nr;
    return 0;
}

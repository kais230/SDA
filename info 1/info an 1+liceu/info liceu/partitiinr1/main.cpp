#include <iostream>
#include <fstream>
using namespace std;

ifstream f("partitiinr.in");
ofstream g("partitiinr.out");


int k, st[100], n ,s,v[100],c[100];
void init()
{
    st[k] = 0;
}

int succesor()
{
    if (st[k] == n)return 0;
    else { st[k]++; return 1; }
}
int valid()
{
    int i, s = 0,g=1;
    s += st[1];
    for (i = 2; i <= k; i++)
    {
        if (st[i - 1] > st[i] || (st[i]-st[i-1]<2))g = 0;
        s += st[i];
    }

    if (s <= n && g == 1)return 1;
    return 0;
}

int sol()
{
    int i, s = 0;
    for (i = 1; i <= k; i++)
    {
        s += st[i];
    }
    return (s == n);
}
void tipar()
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';

    g << endl;
}
int main()
{
    int as, ev;
    f >> n ;
    k = 1;
    init();
    while (k > 0)
    {
        do
        {
            as = succesor();
            ev = valid();
        } while (as && !ev);
        if (as) {
            if (sol()) { tipar(); }
            else { k++; init(); }
        }
        else k--;

    }
    return 0;
}

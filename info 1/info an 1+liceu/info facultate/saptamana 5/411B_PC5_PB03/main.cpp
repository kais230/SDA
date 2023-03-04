#include <iostream>

using namespace std;


int main()
{
    unsigned int n = 0, cn, v[10] = {0};
    cin >> n;
    cn = n;

    while (cn > 0)
    {
        v[cn % 10]++;
        cn /= 10;
    }
    cout << n;
    for (unsigned int i = 0; i <= 9; i++)
    {
        if (v[i] == 0)cout << i;

    }

    return 0;
}

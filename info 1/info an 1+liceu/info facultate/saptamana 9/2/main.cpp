#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int n, *v1, *v2;
    cin >> n;
    v1 = new int[n];
    v2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    float d = 0;

    for (int i = 0; i < n; i++)
    {
        d = d + (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }

    d = sqrt(d);
    cout << fixed << setprecision(2) << d;
    return 0;
}

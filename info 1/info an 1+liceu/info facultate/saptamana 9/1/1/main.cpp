#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float* v;
    int n;
    cin >> n;
    v = new float[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    float maxim = v[0], minim=v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] > maxim)maxim = v[i];
        if (v[i] < minim)minim = v[i];
    }



    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxim)v[i] = 1.0;
        else if (v[i] == minim)v[i] = 0;
        else {
            v[i] = (v[i] - minim) / (maxim - minim);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(4) << v[i]<<" ";
    }

    return 0;
}

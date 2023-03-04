// Programare-POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <iomanip>
using namespace std;


class card {
public:
    double suma = 0;
    void afisare() { cout << suma; }
};

class A :public card {
public:
    float adaugare(float nr)
    {
        return  suma += nr;
    }
};


class M :public card {
public:
    float metrou(float nr)
    {
        if (suma >= 3*nr)
        {
            return suma -= 3 * nr;
        }
    }
};


class S :public card {
public:
    float stb(float nr)
    {
        if (suma < 1.5)
        {
            suma = suma - 100;
            return suma;
        }
        return suma -= 1.5 * nr;

    }
};

class T :public card {
public:
    float taxi(float nr)
    {

        if (suma >= 10 && 2 * nr <= suma)
        {
            suma = suma - 2 * nr- 5*nr/100;
            
        }
        return suma;
    }
};

int main()
{
    float suma;
    int n, z, nr;
    cin >> n >> z;
    char c;
    float v[100];

    card Cardul;
    A adau;
    M metr;
    S stb;
    T taxi;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        cin >> nr;
        cin >> z;
        if (c == 'A') { v[i] = adau.adaugare(nr); }
        if (c == 'M') { v[i] = v[i - 1] + metr.metrou(nr); }
        if (c == 'S') { v[i] = v[i - 1] + stb.stb(nr); }
        if (c == 'T') { v[i] = v[i - 1] + taxi.taxi(nr); }

    }
    /*for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";

    }cout << endl;
    */
    float max = -999, min = 999, j = 0, k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > max) { max = v[i]; j = i; }
        if (v[i] < min) { min = v[i]; k = i; }

    }
    if (abs(max) > abs(min))cout << j;
    else cout << k;




}
#include <iostream>

using namespace std;

class Numar {
protected:
    int* cifre;  //retine cifrele numarului
    int nrCifre; //numarul de cifre.
public:
    Numar(long n = 0);
    Numar(const Numar&);
    Numar(int n, int* cifre);

    int operator[] (int i) const
    {
        return ((0 <= i && i <= nrCifre) ? cifre[i] : 0);
    };

    Numar& operator+ (Numar&);
    Numar operator>(Numar P);
    friend ostream& operator<< (ostream& os, Numar& P);
    friend istream& operator >> (istream&, Numar&);
    void out(int i);
};
void Numar::out(int i)
{
    if (i > nrCifre)
        i = nrCifre;
    for (int j = 0; j < i; ++j)
        cout << cifre[j] << endl;
}

Numar::Numar(long n) {
    int c[10], nc, i;
    if (n != 0) {
        for (nc = 0; n > 0; nc++) {
            c[nc] = n % 10;
            n = n / 10;
        }
        this->nrCifre = nc;
        cifre = new int[nc];
        for (i = 0; i < nc; i++) {
            cifre[i] = c[nc - i - 1];
        }
    }
    else {
        this->nrCifre = 1;
        cifre = new int[1];
        cifre[0] = 0;
    }
}

istream& operator >> (istream& is, Numar& P) {
    for (int i = 0; i < P.nrCifre; i++) {
        is >> P.cifre[i];
    }
    return is;
}

ostream& operator<< (ostream& os, Numar& P) {

    for (int i = 0; i < P.nrCifre; i++)
        os << P.cifre[i];
    os << endl;
    return os;
}

int max(int x, int y) {
    return ((x > y) ? x : y);
}

Numar& Numar::operator+(Numar& P) {
    
        Numar c;
        if (nrCifre > P.nrCifre)
            c.nrCifre = nrCifre;
        else
            c.nrCifre = P.nrCifre;
        c.cifre = new int[c.nrCifre];
        int i = nrCifre - 1, j = P.nrCifre - 1, k = c.nrCifre - 1, aux = 0;
        while (i > -1 && j > -1)
        {
            c.cifre[k] = (cifre[i] + P[j] + aux) % 10;
            aux = (cifre[i] + P[j] + aux) / 10;
            i--; j--; k--;
        }
        while (i > -1)
        {
            c.cifre[k] = (cifre[i] + aux) % 10;
            aux = (cifre[i] + aux) / 10;
            i--; k--;

        }
        while (j > -1)
        {
            c.cifre[k] = (P[j] + aux) % 10;
            aux = (P[j] + aux) / 10;
            j--; k--;

        }
        if (aux && k == -1)
        {
            int* cop = new int[c.nrCifre];
            for (int t = 0; t < c.nrCifre; ++t)
                cop[t] = c[t];
            delete[] c.cifre;
            c.nrCifre++;
            c.cifre = new int[c.nrCifre];
            c.cifre[0] = aux;
            for (int t = 0; t < c.nrCifre - 1; ++t)
                c.cifre[t + 1] = cop[t];
            delete[] cop;
        }
        return c;
    }

Numar Numar::operator>(Numar P)
{
    if (nrCifre > P.nrCifre)
        return *this;
    if (nrCifre < P.nrCifre)
        return P;
    int ok = 1;
    for (int i = 0; i < nrCifre && ok == 0; ++i)
    {
        if (cifre[i] > P[i])
            ok = 1;
        if (cifre[i] < P[i])
            ok = 2;
    }
    if (ok == 1)
        return *this;
    return P;
}

Numar::Numar(const Numar& nr) {
    nrCifre = nr.nrCifre;
    cifre = new int[nrCifre];
    for (int i = 0; i < nrCifre; i++) cifre[i] = nr.cifre[i];
}

Numar::Numar(int n, int* cifre) {
    nrCifre = n;
    this->cifre = new int[nrCifre];
    for (int i = 0; i < nrCifre; i++) this->cifre[i] = cifre[i];
}

int main() {
    int n, m, a[1000], b[1000],x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Numar n1(n, a);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    Numar n2(m, b);

    

    Numar sum,maxim;
    sum = n1 + n2;
    cout << sum;
    maxim = n1 > n2;
  
    cout << maxim;
    maxim.out(3);
    return 0;
}
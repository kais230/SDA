#include <iostream>

using namespace std;

class Biblioteca
{
public:
    long long v[1000], k = 0;
    int nr;
    virtual void GetN(int x) = 0;
    virtual void GetS(long int x, int k) = 0;

};

class Literatura : public Biblioteca
{
public:
    int aux = 0;
    int i, j;
    void Delete()
    {
        for (i = 0; i < nr - k; i++)
        {
            if (v[i] > 9999)
            {
                k++;
                for (j = i; j < nr; j++)
                {
                    v[j] = v[j + 1];
                }
                for (j = i - 1; j < nr - 1; j++)
                {
                    v[j] = v[j + 1];
                }

                aux = aux + 2;
                i = i - 2;

            }
        }
    }
    void AfisH()
    {
        for (i = nr - k - aux + 1; i >= 0; i--)
        {
            if (v[i] == 7)
                cout << "8 ";
            if (v[i] != 0)
                cout << v[i] << " ";
        }
    }
    virtual void GetN(int x)
    {
        nr = x;
    }
    virtual void GetS(long int x, int k)
    {
        v[k] = x;
    }

};

class Manuscrise : public Biblioteca
{
public:
    int i, j;
    void Delete()
    {
        for (i = 0; i < nr - k; i++)
        {
            if (v[i] > 9999)
            {

                for (j = i; j < nr; j++)
                {
                    v[j] = v[j + 1];
                }
                k++;
            }
        }
    }
    void AfisH()
    {
        for (i = k; i < nr - k; i++)
        {
            cout << v[i] << " ";
        }
    }
    virtual void GetN(int x)
    {
        nr = x;
    }
    virtual void GetS(long int x, int k)
    {
        v[k] = x;
    }

};
class Carti_Rare :public Literatura, Manuscrise {
public:
    int* carti, nr;
    virtual void get(int* vect, int n)
    {
        nr = n;
        carti = new int[nr];
        for (int i = 0; i < nr; i++)
        {
            carti[i] = vect[i];
        }
    }
    int dif = 0;
    void Adaugare()override
    {
        if (carti[0] == 1 || carti[0] == 10) {
            int* car;
            car = new int[nr];
            for (int i = 0; i < nr; i++)
            {
                car[i] = carti[i];
            }

            for (int i = 0; i < nr; i++)
            {
                carti[i] = car[nr - i - 1];
            }
        }
      




    }
    void Extragere()override
    {
        if (carti[0] < 99) {
            for (int i = 0; i < nr; i++)
            {
                if (carti[i] >= 9999) {

                    for (int j = i; j < nr; j++)
                    {
                        carti[j] = carti[j + 2];
                    }
                    nr = nr - 2;
                    i = i - 1;
                }
            }

            for (int i = 0; i < nr; i++)
            {
                cout << carti[i] << " ";
            }

        }
        else {

            for (int i = 0; i < nr; i++)
            {
                cout << carti[i] << " ";
            }
        }
    }
};

int main()
{
    long int a[1000];
    int i, n = 0;
    while (cin >> a[n])
    {
        n++;
    }
    Literatura L;
    Manuscrise M;
    Biblioteca* b = &L;
    for (i = 0; i < n; i++)
    {
        b->GetS(a[i], i);
    }
    b->GetN(n);
    L.Delete();
    L.AfisH();

    cout << endl;

    b = &M;
    for (i = 0; i < n; i++)
    {
        b->GetS(a[i], i);
    }
    b->GetN(n);
    M.Delete();
    M.AfisH();
    Carti_Rare R;
    R.Adaugare();
    R.Extragere();

    return 0;
}
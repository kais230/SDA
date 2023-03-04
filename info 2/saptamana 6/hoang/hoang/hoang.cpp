#include <iostream>
#include <cstring>
using namespace std;

struct magazin
{
    string TipProdus;
    string Produs;
};

int main()
{
    int n;
    magazin lista[100];

    cout << " nr de produse";
    cin >> n;
   

    for (int i = 0; i < n; i++)
    {
        cin >> lista[i].TipProdus;
        cin >> lista[i].Produs;
    }
   
    int i, j;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (lista[j].TipProdus > lista[j + 1].TipProdus)
            {
                swap(lista[j].TipProdus, lista[j + 1].TipProdus);
                swap(lista[j].Produs, lista[j + 1].Produs);

            }


    cout << "Aici incepe lista" << endl;
    string aux;
    int ok = 1;
    for (int i = 0; i < n; i++)
    {

        if (aux == lista[i].TipProdus) ok = 0;
        else ok = 1;
        if (ok == 1)
        {
            cout << endl<<lista[i].TipProdus << endl;
            aux = lista[i].TipProdus;
        }
       
        
        cout<<lista[i].Produs<<endl;

    }

}
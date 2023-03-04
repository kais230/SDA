#include <iostream>
#include <fstream>
#include "Lista.h"
#include <vector>
using namespace std;

int main()
{
    Lista L;
    L.adaugaStudent("cristi ", 7.5);
    L.adaugaStudent("mihai", 7.5);
    L.adaugaStudent("ana ", 9.66);
    L.adaugaStudent("marian ", 8.23);
    L.adaugaStudent("cristi ", 7.5);
    L.adaugaStudent("cristi ", 7.5);
    L.adaugaStudent("cristi ", 7.5);
    L.adaugaStudent("cristi ", 7.5);
    L.adaugaStudent("cristi ", 7.5);



     L.afisare();
    
    
    vector<int> b;
    b = L.returneazaIndecsiSortati();

    for (auto element : b) {
        cout << element << " ";
    }
    
    cout << endl;
    // L.afisare();

    return 0;
}
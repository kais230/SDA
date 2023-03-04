#include <iostream>
#include <iterator>
#include <list>
using namespace std;



void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{

    list<int> L;
    list<int>::iterator it = L.begin();
    int x;
   
    for (int i = 0; i < 10; i++) {
        L.push_back(i);
    }

    //1.adauga element la sfaristul listei
    cin >> x;
    L.push_back(x); 

    //2.modificare element

    advance(it, 2);
    *it = x;

    //3.inserare
  
    advance(it, 2);
    L.insert(it, 5);

    //4.stergerea elementului curent
    L.erase(it);

    //5.afisare pozitie curenta

    cout << *it;

    //6.stergere lista
    L.clear();

    //7.dimensiunea listei

    cout << L.size();
    //8.inversarea listei
    L.reverse();

    //9.palindrom
    list<int> L2;
   
    advance(it, 0);
    L.splice(it, L2);
    L.reverse();
    for (it = L.begin(); it != L.end(); ++it)
    {
        it
    }




}


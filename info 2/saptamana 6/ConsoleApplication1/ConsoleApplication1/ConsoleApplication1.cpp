#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using namespace std;

template <class T>
class List;

template <class T>
class Node
{
    T data{};
    int nr_es;  // nr esantioane
    Node<T>* next{};

public:
    Node() // numai daca este necesar
    {
        next = NULL;
        nr_es = 1;
    }

    explicit Node(T _data)  // numai daca este necesar
    {
        data = _data;
        nr_es = 1;
        next = NULL;
    }

    ~Node() // numai daca este necesar
    {
        delete next;
    }

    unsigned long long Data();  // NU SE MODIFICA

    Node<T>* Next()
    {
        return next;
    }

    friend class List<T>;
};

template <class T>
class List
{
    Node<T>* head{};

public:
    List() // numai daca este necesar
    {
        head = new Node<T>;
    }

    ~List() // numai daca este necesar
    {

        delete head;
    }

    void push_front(T data) //adaugare nod la inceputul listei
    {
        Node<T>* newNode = new Node<T>(data);
        newNode->next = head->next;
        head->next = newNode;
      
    }

    Node<T>* begin() // intoarce pointer la primul nod din lista
    {
        return head->next;
    }
    void afisare() {
        Node<T>* tmp;
        tmp = head->next;
        int i = 0;
        while (tmp) {

            cout << i << " " << tmp->data << " " << tmp->nr_es << endl;
            i++;
            tmp = tmp->next;
        }
    }

    void Prelucrare(int dif) // functia ceruta in problema
    {

        Node<T>* tmp;
        Node<T>* x;
        tmp = head->next->next;
        x = head->next;

        int k = 1;
        int suma;
        suma = x->data;



        while (tmp)
        {


            if (abs(x->data - tmp->data) < dif)
            {
                k++;
                suma = suma + tmp->data;
            }
            else
            {
                x->data = suma / k;
                x->nr_es = k;

                x->next = tmp;
                x = x->next;
                k = 1;
                suma = x->data;

            }
            if (tmp->next == NULL && x->nr_es != 1)
            {
                x->data = suma / k;
                x->next = NULL;
            }

            tmp = tmp->next;


        }


       

    }
};


int main()
{
    ifstream f("date.in.txt");

    List<int> L;
    int x;
    cin >> x;
    while (x!=0)
    {
       
        L.push_front(x);
        cin >> x;
       
    }



    L.afisare();
    L.Prelucrare(3);
    cout << endl;
    L.afisare();
    return 0;
}
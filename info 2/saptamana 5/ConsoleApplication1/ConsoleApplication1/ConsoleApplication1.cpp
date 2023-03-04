#include <iostream>
#ifndef SDA1_LIST_H
#define SDA1_LIST_H
#include <math.h>
using namespace std;

template <class T>
class List;

template <class T>
class Node
{
    T data{};
    Node<T>* next{};

public:
    Node() // numai daca este necesar
    {
        next = nullptr;
    }

    explicit Node(T _data)  // numai daca este necesar
    {
        data = _data;
        next = NULL;
    }

    ~Node() // numai daca este necesar
    {
        delete next;
    }

    void setNext(Node<T>* _next)
    {
        this->next = _next;
    }

    void getNext()
    {
        cout << "next:" << " " << this->next << endl;
    }

    T Data()
    {
        return data;
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
        //. . . . .
    }

    void push_front(T data) //adaugare nod la inceputul listei
    {
        Node<T>* tmp = new Node<T>(data);
        tmp->setNext(this->head);
        tmp = head;
    }

    Node<T>* begin() // intoarce pointer la primul nod din lista
    {
        //. . . . .
    }

    void Prelucrare(int P1, int P2) // functia ceruta in problema
    {
        Node* n;
        T a, b;
        int ok = 1;
        while (ok != 0)
        {
            ok = 0;
            n = head;
            while (n != NULL)
            {
                a = n->data;
                b = n->next->data;
                if (abs(a - b) > P1)
                {
                    Node* temp = new Node();
                    temp->data = (a + b) / 2;
                    temp->next = n->next;
                    n->next = temp;
                    ok++;

                }
                if (abs(a - b) < P2)
                {
                    n->next = n->next->next;
                    ok++;

                }
            }
        }
    }
};

int main()
{
    Node<float> n1;
    Node<float> n2(3.3f);

    /* cout<<n1.Data()<<endl;
     cout << n2.Data()<<endl;*/

    n1.setNext(&n2);
    cout << "Addr mea: " << &n1 << endl;
    cout << n1.Data() << endl;



    cout << "Addr mea: " << &n2 << endl;
    cout << n2.Data();
    cout << endl;

    List<float> L1;
    L1.push_front(3.3f);
    L1.push_front(5.5f);
}
#endif
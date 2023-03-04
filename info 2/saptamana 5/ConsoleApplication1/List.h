#ifndef SDA1_LIST_H
#define SDA1_LIST_H

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
        //. . . .
    }

    explicit Node(T _data)  // numai daca este necesar
    {
        //. . . .
    }

    ~Node() // numai daca este necesar
    {
        //. . . . .
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
        //. . . . .
    }

    ~List() // numai daca este necesar
    {
        //. . . . .
    }

    void push_front(T data) //adaugare nod la inceputul listei
    {
        //. . . .
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

#endif
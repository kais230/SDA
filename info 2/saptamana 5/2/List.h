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
        data = _data;
    }

    ~Node() // numai daca este necesar
    {
        //. . . . .
    }

    T Data()
    {
        return data;
    }

    Node<T>* Next()
    {
        return next;
    }

    bool isEnd()
    {
        return next == nullptr;
    }

    Node<T>* Reverse() {
        if (next == NULL)
            return this;

        if (next->next == NULL) {
            Node<T>* tmp = next;
            next = NULL;
            return tmp;
        }
        else {
            Node<T>* tmp = next->Reverse();

            next->next = this;
            next = NULL;

            return tmp;
        }
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
        Node<T>* newNode = new Node<T>(data);
        newNode->next = head->next;
        head->next = newNode;
        //. . . .
    }

    Node<T>* begin() // intoarce pointer la primul nod din lista
    {
        return head->next;
    }

    void Reverse()
    {
        if (head->next)
        {
            head->next = head->next->Reverse();

        }
    }

};

#endif


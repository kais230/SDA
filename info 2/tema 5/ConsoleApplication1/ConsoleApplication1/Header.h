#include <string>
#include <vector>
#include <iostream>



class Lista;


class Node
{
public:
    double data;
    std::string name;
    Node* next;
    int index;


    Node()
    {
        next = NULL;
        name = "";
        data = 0;
        index = 0;
    }
    explicit Node(std::string _name, double _data)
    {
        next = NULL;
        name = _name;
        data = _data;
        index = 0;
    }


    friend class Lista;


};



class Lista {
public:
    Node* head;
    Node* aux;
    int k = 0;
    Lista() {

        head = new Node;

    }

    virtual ~Lista() {
        Node* current = head->next;

        while (current != NULL) {
            aux = current->next;
            delete current;
            current = aux;
        }
        delete head;
    }

    void adaugaStudent(std::string nume, double medie) {

        Node* newNode = new Node(nume, medie);
        if (head->next == NULL)
        {
            aux = newNode;
            head->next = aux;

        }
        else
        {
            aux->next = newNode;
            aux = aux->next;
        }

        aux->index = k;
        k++;

    }

    std::vector<int> returneazaIndecsiSortati() {

        Node* curr;
     




        std::vector<int> indecsisortati;
        curr = head->next;
        while (curr != NULL)
        {
            indecsisortati.push_back(curr->index);
            curr = curr->next;
        }

        return indecsisortati;
    }
};

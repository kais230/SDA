#ifndef SDA_QUEUE_H
#define SDA_QUEUE_H
#include <iostream>
using namespace std;

template <class T>
class Queue;

template <class T>
class Node
{
    T data{};
    T timp{};
    string nume;
    Node<T>* next{};

public:
    Node()
    {
        next = nullptr;
        data = 0;
        timp = 0;
       
    }

    explicit Node(T _data,int _timp,string _Nume)
    {
        data = _data;
        timp = _timp;
        nume = _Nume;
        next = nullptr;

    }

    ~Node() //obligatoriu
    {
        delete next;
    }

    friend class Queue<T>;
};

template <class T>
class Queue
{
    Node<T>* head{};
    Node<T>* tail{};


public:
    Queue()
    {
        head = new Node<T>();
        head->next = NULL;
        tail = head;
    }

    ~Queue() //obligatoriu
    {
        delete head;
    }

    void push(T data,int Timp,string Nume) //adauga nod in coada
    {
        tail->next = new Node<T>(data,Timp,Nume);
        tail = tail->next;
        tail->next = NULL;
    }

    void pop() // elimina nod din coada
    {
        if (head->next == tail) {
            tail = head;
        }
        Node<T>* tmp = head->next;
        head->next = head->next->next;
        tmp->next = NULL;
        delete tmp;
    }

    bool empty() //verifica daca coada este goala
    {
        if (head == tail) return true;
        return false;
    }

    T& front() //intoarce referinta la data primului nod din coada
    {
        return head->next->data;
    }

    T& back() //intoarce referinta data ultimului nod din coada
    {
        return tail->data;
    }
    void afisare()
    {
        Node<T>* tmp = head->next;

   
        
        while (tmp->next != NULL)
        {
            cout << tmp->data << " "<<tmp->nume<<" "<<tmp->timp<<endl;
            tmp = tmp->next;
           
       }
        
    }
    void golire()
    {
        while (head->next != NULL)
        {
            pop();
        }
    }
    
};

#endif
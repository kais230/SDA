#ifndef SDA1_LIST_H
#define SDA1_LIST_H
#include <math.h>

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
       nr_es=1;
       next=NULL;
    }

    explicit Node(T _data)  // numai daca este necesar
    {
        data = _data;
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
        Node<T> *tmp;
        tmp = head->next;
        while (tmp) {
            head->next = tmp->next;
            delete tmp;
            tmp = head->next;
        }
        delete head;
    }

   void push_front(T data) //adaugare nod la inceputul listei
    {
        Node<T> *newNode = new Node<T>(data);
        newNode->next = head->next;
        head->next = newNode;
      
    }
    
    Node<T>* begin() // intoarce pointer la primul nod din lista
    {
        return head->next;
    }
    void Prelucrare(int dif) // functia ceruta in problema
    {
        
          Node<T>* tmp;
          Node<T>* x;
          tmp=head->next->next;
          x=head->next;
          
          int k=1;
          int suma;
          suma=x->data;
          
          

          while(tmp)
          {
             
                  
                   if(abs(x->data - tmp->data)< dif)
                   {
                    k++;
                    suma=suma+tmp->data;
                   }
                   else
                   { 
                  x->data= suma/k;
                  x->nr_es =k;
                  
                  x->next=tmp;
                  x=x->next;
                  k=1;
                  suma=x->data;

                  }
                  tmp=tmp->next;
              
              
              
              
          }
          
         


         
          
         
    }

};

#endif



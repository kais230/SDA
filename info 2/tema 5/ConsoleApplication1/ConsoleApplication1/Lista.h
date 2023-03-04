#include <string>
#include <vector>
#include <iostream>
using namespace std;


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
    int k = 0;

    Lista() {

        head = new Node;

    }

    virtual ~Lista() {
        Node* current = head;

        while (current != NULL) {
           
            head= current->next;
           
            delete current;
            current = head;
        }

    }

    void adaugaStudent(std::string nume, double medie) {

        Node* temp = new Node(nume, medie);
        temp->next = head->next;
        head->next = temp;

        if (temp->next == NULL)
        {
            temp->index = 0;
        }
        else {
            temp->index = temp->next->index + 1;
        }
        k++;
    }

    int length(Node* current)
    {
        int count = 0;
        while (current != NULL) {
            current = current->next;
            count++;
        }
        return count;
    }


    

    void merge (Node** start1, Node** end1, Node** start2,  Node** end2)
    {

        
         Node* temp = NULL;
        if ((*start1)->data > (*start2)->data) {
            swap(*start1, *start2);
            swap(*end1, *end2);
        }

        
         Node* astart = *start1, * aend = *end1;
         Node* bstart = *start2, * bend = *end2;
        Node* bendnext = (*end2)->next;
        while (astart != aend && bstart != bendnext) {
            if (astart->next->data > bstart->data) {
                temp = bstart->next;
                bstart->next = astart->next;
                astart->next = bstart;
                bstart = temp;
            }
            else if ((astart->next->data == bstart->data) && (astart->next->name.compare(bstart->name) < 0))
            {

                temp = bstart->next;
                bstart->next = astart->next;
                astart->next = bstart;
                bstart = temp;

            }
            astart = astart->next;
        }
        if (astart == aend)
            astart->next = bstart;
        else
            *end2 = *end1;
    }

  
    void mergeSort( Node** head)
    {
        if (*head == NULL)
            return;
        Node* start1 = NULL, * end1 = NULL;
         Node* start2 = NULL, * end2 = NULL;
         Node* prevend = NULL;
        int len = length(*head);

        for (int gap = 1; gap < len; gap = gap * 2) {
            start1 = *head;
            while (start1) {

               
                bool isFirstIter = 0;
                if (start1 == *head)
                    isFirstIter = 1;

                
                int counter = gap;
                end1 = start1;
                while (--counter && end1->next)
                    end1 = end1->next;

                
                start2 = end1->next;
                if (!start2)
                    break;
                counter = gap;
                end2 = start2;
                while (--counter && end2->next)
                    end2 = end2->next;

                
                Node* temp = end2->next;

                
                merge(&start1, &end1, &start2, &end2);

                
                if (isFirstIter)
                    *head = start1;
                else
                    prevend->next = start1;

                prevend = end2;
                start1 = temp;
            }
            prevend->next = start1;
        }
    }
    
    void afisare()
    {
        Node* curr;


        curr = head->next;



        while (curr != NULL)
        {
            cout << curr->name << " " << curr->data << " " << curr->index;
            curr = curr->next;
            cout << endl;
        }
        

    }







    std::vector<int> returneazaIndecsiSortati() {





        std::vector<int> indecsisortati ;

      
        Node* curr;
        curr = head->next;
        mergeSort(&curr);
        while (curr != NULL)
        {
            indecsisortati.push_back(curr->index);
            curr = curr->next;
        }
        reverse(indecsisortati.begin(), indecsisortati.end());


        return indecsisortati;
    }
};
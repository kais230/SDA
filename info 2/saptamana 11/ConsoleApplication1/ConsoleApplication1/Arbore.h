#include <vector>
#include <iostream>
#include <math.h>
using namespace std;


template <class T>
class ArboreBST;


template <class T>
class Node
{
    public:
     T data{};
     Node<T>* left{};
     Node<T>* right{};

     Node()
     {
         left =NULL;
         right= NULL;
         data=0;
     }
     explicit Node(T _data)
    {
        left = NULL;
        right = NULL;
        data = _data;
    }






    friend class ArboreBST<T>;


};




template <class T>

class ArboreBST {
public:

    Node<T>* root;



    void construiesteDinPostOrdine(std::vector<T> const& postOrdine)
    {
        root->data = postOrdine.back();
        int i = postOrdine.size() - 2;

        while (root->data < postOrdine[i] && i>=0)
        {
            i--;
        }
        

        std::vector<T> right_postorder(postOrdine.begin() + i + 1, postOrdine.end() - 1);

        std::vector<T> left_postorder(postOrdine.begin(), postOrdine.begin() + i + 1);
     
        //subarbore dreapta
        int n= postOrdine.size() - 2;

        Node<T>* nod = root;
        while (n > i)
        {
            Node<T>* temp = new Node<T>(postOrdine[n]);
            if (nod->data > temp->data)
            {
                nod->left = temp;                                     
            }
            else
            {
                nod->right = temp;
                if(postOrdine[n-1]>nod->data)
                nod = temp;
            }

            n--;
        }


        //subarbore stanga
        n=i;

            nod = root;
        while (n > 0)
        {
            Node<T>* temp = new Node<T>(postOrdine[n]);
            if (nod->data > temp->data)
            {
                nod->left = temp;
                nod = temp;
            }
            else
            {
                nod->right = temp;
            }


            n--;
        }








    }

    T const& operator[] (int k) const {

        cout << 3;

    }
}; #pragma once

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
        left = NULL;
        right = NULL;
        data = 0;
    }
    explicit Node(T _data)
    {
        left = NULL;
        right = NULL;
        data = _data;
    }


    Node* from_postorder(const std::vector<T>& postorder) {
        // Base case: if the postorder list is empty, return nullptr
        if (postorder.empty()) return NULL;

        // The last element in the postorder list is the root of the tree
        T root_data = postorder.back();
        Node* root = new BinaryTreeNode(root_data);

        // Find the boundary between the left and right subtrees
        int i = postorder.size() - 2;
        while (i >= 0 && postorder[i] > root_data) {
            i--;
        }

        // Recursively build the left and right subtrees
        root->left = from_postorder(std::vector<T>(postorder.begin(), postorder.begin() + i + 1));
        root->right = from_postorder(std::vector<T>(postorder.begin() + i + 1, postorder.end() - 1));

        return root;
    }




 

    friend class ArboreBST<T>;


};







template <class T>
class ArboreBST {
public:

    Node<T>* Root{};


    void construiesteDinPostOrdine(std::vector<T> const& postOrdine) 
    {


        Root->from_postorder(postOrdine);



    }

    T const& operator[] (int k) const 
    {





    }
};
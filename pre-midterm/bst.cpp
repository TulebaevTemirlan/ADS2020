#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left, *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class BST{
    public:
        Node *root;
    BST(){
        this->root = NULL;
    }
    Node* insert(Node* root,int data){
        if(root == NULL){
            return new Node(data);
        }
        else if(root->data > data){
            root->left = insert(root->left, data); 
        }
        else if(root->data < data){
            root->right = insert(root->right, data);
        }
        return root;
    }
    Node* find_max(Node* node){
        node = node->left;
        while(node->right != NULL){
            node = node->right;
        }
        return node;
    }
    Node* find_min(Node* node){
        node = node->right;
        while(node->left != NULL){
            node = node->left;
        }
        return node;
    }
    void print(Node* node){
         if(node == NULL)
            return;

        print(node->left);

        cout <<node->data << " ";

        print(node->right);
        
    }
};
int main(){
    BST *bst = new BST();
    bst->root = bst->insert(bst->root,25);
    

    bst->root = bst->insert(bst->root,50);
    bst->root = bst->insert(bst->root,45);
    bst->root = bst->insert(bst->root,56);
    bst->root = bst->insert(bst->root,17);
    bst->root = bst->insert(bst->root,2);
    bst->root = bst->insert(bst->root,20);
    bst->root = bst->insert(bst->root,5);

    
    cout << bst->find_max(bst->root)->data << endl;

    cout << bst->find_min(bst->root)->data << endl;

    bst->print(bst->root);
}
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
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
        root = NULL;
    }
    Node* insert(Node *root, int data){
        if(root == NULL){
            return new Node(data);
        }
        else if(root->data > data){
            root->left = insert(root->left,data);
        }
        else if(root->data < data){
            root->right = insert(root->right,data);
        }
        return root;
    }
    
    
    void hasChild(Node *node){
    if (node == NULL) {
        return;
    }
    hasChild(node->left); 
    if((node->left == NULL) && (node->right == NULL)){
        cout << node->data << endl;
    }
    hasChild(node->right);
}
};
int main(){
    BST *bst = new BST();
    int val;
    while(cin >> val){
        if(val == 0){
            break;
        }
        else{ 
        bst->root = bst->insert(bst->root, val);
        }
    }
    bst->hasChild(bst->root);
}
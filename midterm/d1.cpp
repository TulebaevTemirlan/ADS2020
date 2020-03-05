#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
class BsT{
    public:
        Node *root;
    BsT(){
        this->root = NULL;
    }
    Node* insert(Node* root,int data){
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
    void print(Node *node){
        if(node == NULL){
            return;
        }
        print(node->left);
        cout << node->data << endl;
        print(node->right);
    }
};
int main(){
    BsT *bst = new BsT();
    int val;
    while(cin >> val){
        if(val == 0){
            break;
        }
        else{ 
        bst->root = bst->insert(bst->root, val);
        }
    }
    bst->print(bst->root);
}
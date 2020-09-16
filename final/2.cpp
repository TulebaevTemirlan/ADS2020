#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class Stack{
    public:
        int sz;
        Node *top;
    Stack(){
        sz = 0;
        top = NULL;
    }

    void push(int data){
        Node *node = new Node(data);
        if(top == NULL){
            top = node;
        }
        else{
            node->next = top;
            top = node;
        }
        sz++;
        cout << "ok" << endl;
    }
    void pop(){
        if(top == NULL){
            cout << "error" << endl;
        }
        if(top != NULL){
            cout << top->data << endl;
            top = top->next;
            sz--;
        }
    }
    void back(){
        if(top == NULL){
            cout << "error" << endl;
        }
        if(top != NULL){
            cout << top->data << endl;
        }
    }
    void size(){
        cout << sz << endl;
    }
    void clear(){
        if(top != NULL){
            while(sz != 0){
                top = top->next;
                sz--;
            }
        }
        cout << "ok" << endl;
    }
};
int main(){
    string command;
    Stack mystack;
    int x;
    while(cin >> command){
        if(command == "push"){
            cin >> x;
            mystack.push(x);
        }
        else if(command == "pop"){
            mystack.pop();
        }
        else if(command == "back"){
            mystack.back();
        }
        else if(command == "size"){
            mystack.size();
        }
        else if(command == "clear"){
            mystack.clear();
        }
        else if(command == "exit"){
            cout << "bye";
            break;
        }
    }
    return 0;
}
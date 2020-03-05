// LinkedList

#include <iostream>
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
class LinkedList{
    public:
        Node *head,*tail;
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }
    void insert(int data){
        Node *node = new Node(data);
        if(!this->head){
            this->head = node;
        }
        else{
            this->tail->next = node;
        }
        this->tail = node;
    }
    int count(int data){
        int cnt = 0;
        Node *temp = new Node(data);
        temp = head;
        while(temp != NULL){
            if(temp->data == data){
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }
    int getNth(int data){
        Node *temp = new Node(data);
        temp = head;
        while(data != 0){
            temp = temp->next;
            data--;
        }
        return head->data;
    }
    void insertLast(int data){
        Node *node = new Node(data);
        if(head == NULL){
            head = node;
        }
        else{
            Node *temp = new Node(data);
            temp = head;
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = node;
        }
    }
};
int main(){
    LinkedList link;
    link.insert(1);
    link.insert(1);
    link.insert(1);
    link.insert(2);
    link.insert(1);
    link.insert(1);
    link.insertLast(7);

    cout << link.getNth(1) << endl;

    cout << link.count(1) << endl;
    cout << link.count(3) << endl;
    cout << link.count(2) << endl;


}
#include <iostream>
using namespace std;
class LinkedListNode{
    public:
        int data;
        LinkedListNode *next;
    LinkedListNode(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    public:
        LinkedListNode *head;
        LinkedListNode *tail;

        LinkedList(){
            this->head = NULL;
            this->tail = NULL;
        }
    void insert_node(int data){
        LinkedListNode *node = new LinkedListNode(data);
        if(!this->head){
            this->head = node;
        }
        else{
            this->tail->next = node;
        }
        this->tail = node;
    }
    void print(){
        while(head != NULL){
            cout << head->data << endl;
            head = head->next;
        }
    }
    LinkedListNode* insertNodeAtTail(LinkedListNode* head,int data){
        LinkedListNode *node = new LinkedListNode(data);
        node->data = data;
        node->next = NULL;
        if(head == NULL){
            head = node;
        }
        else{
            LinkedListNode *temp = new LinkedListNode(data);
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = node;
        }
        return head;
    }
};
int main(){

}
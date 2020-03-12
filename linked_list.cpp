#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    
    public:
        Node *head, *tail;
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }
    
    void insert_node(int data){
        Node *node = new Node(data);
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
    
    Node* insertNodeAtTail(Node* head,int data){
        Node *node = new Node(data);
        node->data = data;
        node->next = NULL;
        if(head == NULL){
            head = node;
        }
        else{
            Node *temp = new Node(data);
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = node;
        }
        return head;
    }
    Node* insertNodeAtHead(Node *head, int data){
        Node *node = new Node(data);
        node->next = head;
        head = node;

        return head;
    }
    Node* insertNodeAtPosition(Node *head, int data, int position){
        Node *node = new Node(data);
        if(head == NULL && position == 0){
            head = node;
        }
        else if(head != NULL && position == 0){
            node->next = head;
            head = node;
        }
        Node *current = new Node(data);
        Node *prev = new Node(data);
        current = head;
        prev = NULL;
        int index = 0;
        while(index < position){
            prev = current;
            current = current->next;
            index++;
        }
        node->next = current;
        prev->next = node;

        return head;
    }
    Node* deleteNode(Node *head, int position){
        if(head == NULL){
            return NULL;
        }
        else if (position == 0){
            return head->next;
        }
        else{
            Node *node = head;
            for(int i = 0; i < position - 1; i++){
                node = node->next;
            }
            node->next = node->next->next;

            return head;
        }
    }
    void reversePrint(Node *head){
        if(head == NULL){
            return;
        }
        reversePrint(head->next);
        cout << head->data << " ";
    }
    Node* reverse(Node *head){
        // Initialize current, previous and 
        // next pointers 
        Node* current = head; 
        Node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev; 
    }
    bool compare_lists(Node *head1, Node *head2){
        while(head1 && head2 && head->data == head2->data){
            head1 = head1->next;
            head2 = head2->next;
            if(head1 == NULL && head2 == NULL){
                return true;
            }

            return false;
        }
    }
    Node* mergeLists(Node *head1, Node *head2){
        Node *result = NULL;
        if(head1 == NULL){
            return head2;
        }
        else if (head2 == NULL){
            return head1;
        }

        if(head1->data <= head2->data){
            result = head1;
            result->next = mergeLists(head1->next, head2);
        }
        else{
            result = head2;
            result->next = mergeLists(head1, head2->next);
        }
        return result;
    }
    Node* removeDuplicates(Node *head){
        Node *to_delete;
        if(head == NULL){
            return head;
        }
        if(head->next != NULL){
            if(head->data == head->next->data){
                to_delete = head->next;
                head->next = head->next->next;
                free(to_delete);//Функция free освобождает место в памяти.
                removeDuplicates(head);
            }
            else{
                removeDuplicates(head->next);
            }
        }
        return head;
    }
};
int main(){

}
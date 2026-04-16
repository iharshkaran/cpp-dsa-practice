#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Linkedlist{
public:
    Node* head;
    int size;
    Linkedlist(){
        head = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        Node* t = head;
        if(size==0) head = temp;
        else{
            for(int i=1; i<size; i++){
                t = t->next;
            }
            t->next = temp;
            temp->next = NULL;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = temp;
        else{temp->next = head;
        head = temp;}
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.insertAtTail(65);
    ll.insertAtTail(88);
    ll.display();
    ll.insertAtTail(65);
    ll.insertAtTail(88);
    ll.display();
    ll.insertAtHead(55);
    ll.display();
}
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
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>=size) cout<<"Invalid"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size-1) insertAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* t = head;
            for(int i=0; i<idx-1; i++){
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Idx"<<endl;
            return -1;
        } 
        else if(idx==0) return head->val;
        else{
            Node* temp = head;
            for(int i=0; i<idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        Node* temp = head;
        for(int i=0; i<size-2; i++){
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }
    void deleteAtIdx(int idx){
        Node* temp = head;
        for(int i=0; i<idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
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
    ll.insertAtIdx(0,99);
    ll.insertAtIdx(5,69);
    ll.insertAtIdx(5,69);
    ll.display();
    cout<<ll.getAtIdx(5)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}
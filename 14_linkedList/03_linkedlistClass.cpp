#include<iostream>
using namespace std;
class Node{ // User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist{ // User defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx, int val){
        if(idx<0 || size<=idx) cout<<"Invalid"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size-1) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || size<=idx){
             cout<<"Invalid Index";
             return -1;
        }
        else if(idx==0) return head->val; 
        else if(idx==size-1) return tail->val;
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
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || size<=idx) cout<<"Invalid"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Linkedlist ll; // { }
    ll.insertAtTail(10); // {10->NULL}
    ll.insertAtTail(20); // {10,20->NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtHead(80); // {80,10,20->NULL}
    ll.display();
    ll.insertAt(1,90); // {80,90,10,20->NULL}
    ll.display();
    cout<<ll.getAtIdx(1)<<endl; // 90
    ll.deleteAtHead(); // {90,10,20->NULL}
    ll.display();
    ll.deleteAtTail(); // {90,10->NULL}
    ll.display();
    ll.insertAtHead(833); // {833,90,10->NULL}
    ll.insertAtHead(650); // {650,833,90,10->NULL}
    ll.display();
    ll.deleteAtIdx(1); // {650,90,10->NULL}
    ll.display();
}
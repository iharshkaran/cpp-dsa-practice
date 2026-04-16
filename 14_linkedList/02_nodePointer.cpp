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

// Print 
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Print using Recursion
void displayRec(Node* head){ 
    if(head==NULL){
        cout<<endl;
        return;
    } 
    cout<<head->val<<" ";
    display(head->next);
}

// Reverse
void revDisplay(Node* head){ 
    if(head==NULL) return;
    revDisplay(head->next);
    cout<<head->val<<" ";
}

//Size
int size(Node* head){
    Node* temp = head;
    int n=0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    cout<<endl;
    return n;
}

// insertAtEnd
void insertAtEnd(Node* head, int val){
    Node* t = new Node(val);
    while(head->next != NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
   display(a);
   revDisplay(a);
   cout<<size(a)<<endl;
   insertAtEnd(a,80);
   display(a);
    
}
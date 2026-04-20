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

class Deque{ // User defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void pop_front(){
        head = head->next;
        size--;
    }
    void pop_back(){
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Deque is EMPTY"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Deque is EMPTY"<<endl;
            return -1;
        }
        return tail->val;
    }
    bool empty(){
        if(size==0) return true;
        else return false; 
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
    Deque dq;
    dq.push_back(67);
    dq.push_back(8);
    dq.push_back(9);
    cout<<dq.size<<endl;
    dq.display();
}
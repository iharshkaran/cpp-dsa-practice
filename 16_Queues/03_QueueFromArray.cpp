#include<iostream>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return;
        }
        cout<<endl;
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        cout<<endl;
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        cout<<endl;
        return arr[b];
    }
    int size(){
        cout<<endl;
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(Queue q){
        for(int i = f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(4);
    cout<<q.empty();
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.size()<<endl;
    q.push(4);
    q.push(5);
    cout<<endl;
    q.display(q);
    cout<<q.empty();
    cout<<q.size();
    q.pop();
    q.display(q);

}
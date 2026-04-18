#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }
    void push(int val){
        int size = sizeof(arr)/sizeof(arr[0])-1;
        if(idx == size){
            cout<<"Stack is Full"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        idx--;
    }
    int size(){
        return idx+1;
    }
};
void display(Stack stack){
    while(stack.size()>0){
        cout<<stack.top()<<" ";
    stack.pop();
    } 
    cout<<endl;
    return;
}
int main(){
    Stack st;
    st.push(9);
    st.push(9);
    st.push(9);
    st.push(9);
    st.push(9);
    display(st);
    cout<<st.size()<<endl;
    st.pop();
    display(st);
}
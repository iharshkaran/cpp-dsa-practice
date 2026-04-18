#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:
    vector<int> v;
    Stack(){
    }
    void push(int val){
        v.push_back(val);
    }
    int top(){
        if(v.size() == 0){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    void pop(){
        if(v.size() == 0){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        v.pop_back();
    }
    int size(){
        return v.size();
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
    st.pop();
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
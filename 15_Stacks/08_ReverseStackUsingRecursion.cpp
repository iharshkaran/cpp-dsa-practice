#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>& stack,int n){
    if(stack.size()==0){
        stack.push(n);
        return;
    } 
    int x = stack.top();
    stack.pop();
    pushAtBottom(stack,n);
    stack.push(x);
}
void reverse(stack<int>& stack){
    if(stack.size()==1) return;
    int x = stack.top();
    stack.pop();
    reverse(stack);
    pushAtBottom(stack,x);
}
void display(stack<int> stack){
    if(stack.size()==0){
        cout<<endl;
        return;
    } 
    int x = stack.top();
    cout<<x<<" ";
    stack.pop();
    display(stack);
    stack.push(x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    reverse(st);
    display(st);
}
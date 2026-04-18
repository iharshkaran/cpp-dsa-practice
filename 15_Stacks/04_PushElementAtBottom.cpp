#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& stack){
    while(stack.size()>0){
        cout<<stack.top()<<" ";
    stack.pop();
    } 
    cout<<endl;
    return;
}
void pushAtBottom(stack<int>& st,int n){
    stack<int> temp;
    // empty st into gt
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(n);
    // empty temp into st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    return;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    pushAtBottom(st,70);
    display(st);
}
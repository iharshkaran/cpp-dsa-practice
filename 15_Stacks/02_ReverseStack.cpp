#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> stack){
    while(stack.size()>0){
        cout<<stack.top()<<" ";
    stack.pop();
    } 
    cout<<endl;
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
    stack<int> gt;
    stack<int> rt;
    // empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    // empty gt into rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    // empty rt into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    display(st);
}
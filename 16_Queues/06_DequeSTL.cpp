#include<iostream>
#include<deque>
using namespace std;
void display(deque<int>& q){
    int n = q.size();
    for(int i=1; i<=q.size(); i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop_front();
        q.push_back(x);
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_back(67);
    dq.push_back(8);
    dq.push_back(9);
    cout<<dq.size()<<endl;
    display(dq);
}
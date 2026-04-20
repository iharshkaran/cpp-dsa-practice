#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=1; i<=q.size(); i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void removeAtEvenIdx(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        if(i%2!=0){
            int x = q.front();
            q.push(x);
        }
        q.pop();   
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    removeAtEvenIdx(q);
    display(q);
}
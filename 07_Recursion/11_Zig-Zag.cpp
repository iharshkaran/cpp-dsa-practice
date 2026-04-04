#include<iostream>
using namespace std;
void zigZag(int n){
    if(n==0) return;
    cout<<n; //Pre
    zigZag(n-1);
    cout<<n; //In
    zigZag(n-1);
    cout<<n; //Post
}
int main(){
    zigZag(3);
}
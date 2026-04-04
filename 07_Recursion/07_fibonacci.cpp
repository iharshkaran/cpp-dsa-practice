#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    int leftAns = fibonacci(n-1);
    int rightAns = fibonacci(n-1);
    return leftAns + rightAns;
    // return fibonacci(n-1)+fibonacci(n-2);
}
    
int main(){
    cout<<fibonacci(8);
}
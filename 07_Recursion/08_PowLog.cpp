#include<iostream>
using namespace std;

int power(int x, int n){

    if(n==0) return 1;
    if(n==1) return x;

    int half = power(x, n/2);

    if(n%2==0)
        return half * half;
    else
        return half * half * x;
}

int main(){
    cout<<power(3,6);
}
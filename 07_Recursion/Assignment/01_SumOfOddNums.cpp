#include<iostream>
using namespace std;

int oddSum(int a, int b){
    if(a>b) return 0;
    if(a%2==0) return oddSum(a+1,b);
    return a + oddSum(a+2 ,b);
}

int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;

    cout<<oddSum(a,b);
}
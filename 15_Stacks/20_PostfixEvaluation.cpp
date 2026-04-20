#include<iostream>
#include<string>
using namespace std;
int solve(int val1 , int val2, char ch){
    if(ch == '+') return val1+val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "79+4*8/3-"; // Postfix Expression
    // We need 1 stacks for value
    stack<int> val;
    for(int i=0; i<s.length(); i++){
        //check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else{ // s[i] it is -> * ,- , +, /
            int v2 = val.top();
            val.pop();
            int v1 = val.top();
            val.pop();
            int ans = solve(v1,v2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
}
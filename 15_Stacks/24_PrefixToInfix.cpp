#include<iostream>
#include<string>
using namespace std;
string solve(string val1 , string val2, char ch){
    return val1 + ch + val2;
}
int main(){
    string s = "-/*+79483"; // Prefix Expression
    // We need 1 stacks for value
    stack<string> val;
    for(int i=s.length()-1; i>=0; i--){
        //check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else{ // s[i] it is -> * ,- , +, /
            string v1 = val.top();
            val.pop();
            string v2 = val.top();
            val.pop();
            string ans = solve(v1,v2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
}
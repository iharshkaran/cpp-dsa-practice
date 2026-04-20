#include<iostream>
#include<string>
using namespace std;
int prio(char op){
    if(op =='+' ||op == '-') return 1;
    else return 2;
}
int solve(int val1 , int val2, char ch){
    if(ch == '+') return val1+val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-1"; // Infix Expression
    // We need 2 stacks, 1 for vals, 2 for ops
    stack<int> val;
    stack<char> op;
    for(int i=0; i<s.length(); i++){
        //check if s[i] is a digit (0-9)

        // int ascii = (int)(s[i]);
        // if(ascii>=48 && ascii<=57)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else { // s[i] it is -> * ,- , +, /
            if(op.size()==0 || prio(s[i])>prio(op.top())){
                op.push(s[i]);
            } 
            else{
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int v2 = val.top();
                    val.pop();
                    int v1 = val.top();
                    val.pop();
                    int ans = solve(v1,v2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // operation stack can have values
    // So make it empty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int v2 = val.top();
        val.pop();
        int v1 = val.top();
        val.pop();
        int ans = solve(v1,v2,ch);
        val.push(ans);
    }
    cout<<val.top();
}
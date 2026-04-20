#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prio(char op){
    if(op =='+' ||op == '-') return 1;
    else return 2;
}
string solve(string val1 , string val2, char ch){
    // string s = "";
    // s += val1;
    // s += val2;
    // s += ch;
    // return s;
    return val1 + val2 + ch;
}
int main(){
    string s = "(2+6)*4/8-1"; // Infix Expression
    // We need 2 stacks, 1 for vals (string), 2 for ops
    stack<string> val;
    stack<char> op;
    for(int i=0; i<s.length(); i++){
        if(s[i]>=48 && s[i]<=57){ // sting 
            val.push(to_string(s[i]-48));
        }
        else { // s[i] it is -> * ,- , +, /
            if(op.size()==0) op.push(s[i]);
            else if(s[i] == '(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i] == ')'){
                while(op.top()!= '('){
                    char ch = op.top();
                    op.pop();
                    string v2 = val.top();
                    val.pop();
                    string v1 = val.top();
                    val.pop();
                    string ans = solve(v1,v2,ch);
                    val.push(ans);
                }
                op.pop(); // delete '(' closing bracket
            }
            else if(prio(s[i])>prio(op.top())) op.push(s[i]); 
            else{
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    string v2 = val.top();
                    val.pop();
                    string v1 = val.top();
                    val.pop();
                    string ans = solve(v1,v2,ch);
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
        string v2 = val.top();
        val.pop();
        string v1 = val.top();
        val.pop();
        string ans = solve(v1,v2,ch);
        val.push(ans);
    }
    cout<<val.top();
}
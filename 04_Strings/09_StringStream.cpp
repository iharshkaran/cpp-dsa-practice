#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    //StringStream
    string s;
    cout<<"Enter the sentence : ";
    getline(cin , s);
    stringstream ss(s);
    string temp;
    while(ss>>temp) cout<<temp<<endl;
}
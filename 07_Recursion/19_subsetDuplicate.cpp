#include<iostream>
#include<string>
#include<vector>
using namespace std;

void storeSubset(string ans, string &original, vector<string> &v, int idx, bool flag){
    if(idx == original.size()){
        v.push_back(ans);
        return;
    }

    char ch = original[idx];

    // include
    if(flag==true){
        storeSubset(ans + ch, original, v, idx + 1, true);
    }

    // exclude
    if(original[idx]==original[idx+1] && idx+1<original.size()){
        storeSubset(ans, original, v, idx + 1, false);
    }
    else {
        storeSubset(ans, original, v, idx + 1, true);
    }
}

int main(){
    string str = "aaaaa";
    vector<string> v;
    storeSubset("", str, v, 0, true);

    for(string ele : v){
        cout<<ele<<endl;
    }
}
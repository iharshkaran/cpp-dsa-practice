// Isomorphic String (LeetCode-205)

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s = "paper";
    string t = "title";
    if(s.length()!=t.length()) cout<<"false";
        vector<int> v(150,1000);
        // s
        for(int i=0; i<s.length();i++){
            int idx = (int)s[i];
            if(v[idx]==1000) v[idx] = s[i]-t[i];
            else if(v[idx] != s[i] - t[i]) cout<<"false";
        }

        //emptying the vector
        for(int i=0; i<150; i++){
            v[i] = 1000;
        }

        // t
        for(int i=0; i<t.length();i++){
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx] = t[i]-s[i];
            else if(v[idx] != t[i] - s[i]) cout<<"false";
        }

        cout<<"True";
}
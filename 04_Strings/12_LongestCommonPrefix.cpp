// Longest Common Prefix (LeetCode-14)

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<string> arr = {"dog", "fake", "fuck"}
    int n = arr.size();

    if(n==1) return arr[0];
    // Lexographically
    sort(arr.begin(), arr.end());
    string first = arr[0];
    string last  = arr[n-1];
    string s = "";
    for(int i=0 ; i<min(first.size(), last.size());i++){
        if(first[i]==last[i]){
            s += first[i];
        }
        else cout<<s;
    }
    cout<<s;
    
}
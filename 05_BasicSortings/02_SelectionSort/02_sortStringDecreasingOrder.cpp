// Ques : Sort a String in decreasing order of values 
// associated after removal of values smaller than X.


#include<iostream>
#include<climits>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    int n = s.length();
    
    string str;
    for(int i=0; i<n; i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    
    //Using Selection Sort (reverse)
    for(int i=0; i<str.length()-1; i++){
        int max = INT_MIN;
        int idx = -1;
        for(int j=i ; j<str.length(); j++){
            if(max<str[j]){
                max = str[j];
                idx = j;
            }
        }
        swap(str[i],str[idx]);
        
    }

    for(char ele : str){
        cout<<ele<<" ";
    }
}
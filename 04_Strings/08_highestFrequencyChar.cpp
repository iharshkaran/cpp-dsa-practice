#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // string str;
    // cout<<"Enter the String :";
    // cin>>str;
    // int n = str.length();
    // int max=0;
    // for(int i=0; i<n; i++){
    //     int count = 1;
    //     for(int j=i+1; j<n; j++){
    //         if(str[i]==str[j]) count++;
    //     }
    //     if(max<count) max = count;
    // }
    
    // string maxChar;
    // for(int i=0; i<n; i++){
    //     int count = 1;
    //     for(int j=i+1; j<n; j++){
    //         if(str[i]==str[j]) count++;
    //     }
    //     if(max==count){
    //         maxChar = str[i];
    //     }
    // }

    // cout<<max<<" "<<maxChar;
    

    //filling
    string str = "leetcode";
    vector<int> arr(26,0);
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }

    //get max value
    int mx = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>mx) mx=arr[i];
    }

    for(int i=0; i<26; i++){
        if(arr[i]==mx){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    
}
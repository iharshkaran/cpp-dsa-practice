#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the Sentence : ";
    getline(cin , str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int maxCount = 1;
    int count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        // if(maxCount<count) maxCount = count;
        maxCount = max(maxCount , count);
    }
    
    count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        if(maxCount == count){;
        cout<<maxCount<<" "<<v[i]<<endl;
        }
    }
}
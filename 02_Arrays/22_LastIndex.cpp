#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(6);
    // v.push_back(1);
    // v.push_back(5);


    // int idx = INT_MIN;
    // for(int i=0; i<v.size(); i++){
    //     if(1==v[i]) idx = i;
    // }
    // cout<<"Last Occurrence of 1 is "<<idx<<endl;
    
    int x = 1;
    int idx = -1;
    for(int i=v.size()-1; i>=0; i--){
        if(x==v[i]){
        idx = i;
        break;
        }
    }
    cout<<"Last Index : "<<idx<<endl;


}
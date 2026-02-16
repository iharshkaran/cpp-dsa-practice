#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(19);
    v.push_back(100);
    v.push_back(66);
    v.push_back(18);
    v.push_back(9);
    v.push_back(10);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



}                           
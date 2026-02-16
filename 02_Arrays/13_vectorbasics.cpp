#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention the size 
    v.push_back(6);
    // v.push_back(1);
    v[1] = 16;
    v.push_back(19);
    v.push_back(100);

    //if you want to update / access
    // v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}                           
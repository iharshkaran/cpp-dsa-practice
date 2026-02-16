#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(98);
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
}
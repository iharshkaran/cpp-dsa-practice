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
    v.push_back(19);
    v.push_back(100);
    v.push_back(66);
    v.push_back(18);
    v.push_back(9);
    v.push_back(10);
    v.push_back(18);
    v.push_back(9);
    v.push_back(10);
    v.push_back(19);

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<endl;

}
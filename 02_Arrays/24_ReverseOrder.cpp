#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    for(int i=0;i<n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    vector<int> v2(v.size());
    // for(int i=v2.size()-1; i>=0;i--){ // my Method
    //     cout<<v[i]<<" ";
    // }

    for(int i=0; i<v2.size(); i++){
        v2[i]=v[v.size()-1-i]; // teacher's Method
    }
    display(v2);



}

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void storeSubset(int arr[], int n, vector<int> &v, int idx, bool flag){
    if(idx == n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    // include
    if(flag==true){
        vector<int> temp = v; 
        temp.push_back(arr[idx]);
        storeSubset(arr, n, temp, idx + 1, true);
    }
    // exclude
    if(arr[idx]==arr[idx+1] && idx+1<n){
        storeSubset(arr, n, v, idx + 1, false);
    }
    else {
        storeSubset(arr, n, v, idx + 1, true);
    }
}

int main(){
    int arr[]={1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    storeSubset(arr, n, v, 0, true);
}
#include<iostream>
#include<vector>
using namespace std;

void removeElement(vector<int> &v, int original[], int size, int idx){
    if(size==idx) return;
    if(original[idx]!=2) v.push_back(original[idx]);

    removeElement(v,original,size,idx+1);
}

int main(){
    int arr[]={5,2,1,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;

    removeElement(v,arr,n,0);

    // Print
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i = 0; //a
    int j = 0; //b
    int k = 0; //res
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++]=a[i++];
        } else {
            res[k++]=b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8,9,10};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> a(arr1,arr1+n1);
    vector<int> b(arr2,arr2+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}
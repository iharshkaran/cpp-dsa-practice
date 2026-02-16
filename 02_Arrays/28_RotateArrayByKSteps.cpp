#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(vector<int>& v, int i , int j){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}


int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter Values : ";
    for(int i=0;i<n ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    } 
    int k;
    cout<<"Enter K steps : ";
    cin>>k;
    if(k>v.size()) k = k%v.size();
    
reversePart(v,0,v.size()-1-k);
reversePart(v,v.size()-k,v.size()-1);
reversePart(v,0,v.size()-1);
display(v);


}
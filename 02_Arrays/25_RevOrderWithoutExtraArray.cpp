#include<iostream>
#include<vector>
#include<algorithm>
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
    // int i = 0;
    // int j = v.size()-1; 
    // while(i<=j){
    //     //swap v[i] and v[j]
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j]= temp;
    //     i++;
    //     j--;
    // }

    for(int i=0, j=v.size()-1; i<=j;i++,j--){  //Using For Loop
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;  
    }
    // reverse(v.begin(),v.end()); // Using Inbuild Function
display(v);



}

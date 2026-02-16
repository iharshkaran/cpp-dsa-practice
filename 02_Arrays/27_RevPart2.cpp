#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>& v, int i , int j){
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
reverse(v,0,4);
display(v);


}

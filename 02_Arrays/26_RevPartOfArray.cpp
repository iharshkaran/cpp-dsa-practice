#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
        for(int i=0;i<=a.size()-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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

    int start, end;
    cout<<"Starting Index Value : ";
    cin>>start;
    cout<<"Ending Index Value : ";
    cin>>end;

    for(int i=start, j=end; i<=j;i++,j--){  //Using For Loop
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;  
    }
display(v);



}

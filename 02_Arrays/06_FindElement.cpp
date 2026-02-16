#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element you went to search : ";
    cin>>x;
    // check mark
    bool flag = true; // true --> not present
    for(int i=0 ; i<n; i++){
        if(arr[i]==x) flag = false; 
    }

    if(flag == false) cout<<"Element is present";
    else cout<<"Element is not Present";
}
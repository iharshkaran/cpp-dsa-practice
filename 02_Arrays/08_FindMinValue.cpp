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
    int min = INT_MAX; // max = arr[0]
    for(int i=0 ; i<n; i++){
        if(min > arr[i]) min = arr[i]; 
    }

    cout<<"Minimum value : "<<min;
}
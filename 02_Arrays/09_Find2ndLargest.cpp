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
    int max = INT_MIN;
    int Smax = INT_MIN ;
    for(int i=0 ; i<n; i++){
        if(max < arr[i]) max = arr[i]; 
    }

    for(int i=0; i<n; i++){
        if(Smax<arr[i] && arr[i] != max){
            Smax=arr[i];
        }
    }
    cout<<"Second Largest : "<<Smax;
}
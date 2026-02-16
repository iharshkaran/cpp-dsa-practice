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
    cout<<"Enter the element you went to Compare : ";
    cin>>x;
    
    int count = 0;
    for(int i=0 ; i<n; i++){
        if(arr[i]>x) count++; 
    }
    cout<<"Total No. of Elements in given array greater than given No. is : "<<count;
} 
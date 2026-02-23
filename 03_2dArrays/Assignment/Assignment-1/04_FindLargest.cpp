// Q4: Write a C++ program to find the largest element of a given 2D array of integers

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the row : ";
    cin>>m;
    cout<<"Enter the Column : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements : "<<endl;
    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // find max and Second max(extra)
    int max = INT_MIN;
    int SecMax = INT_MIN;
    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){
            if(max<arr[i][j]){
                SecMax = max;
                max=arr[i][j];
            } 
            else if(SecMax<arr[i][j] && SecMax !=max){
                SecMax = arr[i][j];
            }
        }
    }

    cout<<max<<" "<<SecMax;

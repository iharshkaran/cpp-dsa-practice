// LeetCode-48

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Row/Column : ";
    cin>>n;
    int arr[n][n];

    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your Square Matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Step-1 Transpose
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //print transpose
    cout<<"Transpose : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Step-2 reverse rows
    for(int k=0; k<n; k++){
        for(int i=0,j=n-1; i<=j; i++,j--){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
        }
    }
    //print Rotated Image
    cout<<"Rotated Image : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
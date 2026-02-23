// Q2: Write a program to add two matrices and save the result in one of the given matrices.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows/columns: ";
    cin>>n;

    int matrix1[n][n];
    cout<<"Enter elements of Matrix1 : "<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix1[i][j];
        }
    }

    int matrix2[n][n];
    cout<<"Enter elements of Matrix2 : "<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix2[i][j];
        }
    }

    // Sum of matrix1 and matrix2
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            matrix1[i][j] += matrix2[i][j];
        }
    }

    //print
    cout<<"Sum of Matrix is : "<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
}
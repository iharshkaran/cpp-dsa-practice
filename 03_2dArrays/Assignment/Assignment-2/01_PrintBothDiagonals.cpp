// Q1: Write a program to print the elements of both the diagonals in a square matrix

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows/columns : ";
    cin>>m;

    int matrix[m][m];
    cout<<"Enter elements of Matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    //print both Diagonals
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || i+j==m-1){
                cout<<matrix[i][j]<<" ";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
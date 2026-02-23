//Q3 Write a program to print the matrix in wave form

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

    //wave bottom to top to bottom to top
    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=m-1; i>=0; i--){
                cout<<matrix[i][j]<<" ";
            }
        } else {
            for(int i=0; i<m; i++){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
}
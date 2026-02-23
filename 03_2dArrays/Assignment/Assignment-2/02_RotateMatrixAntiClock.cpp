//Q2: Write a program to rotate the matrix by 90 degrees anti-clockwise.

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

    // transpose
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // reverse columns
    for(int k=0; k<m; k++){
        for(int i=0,j=m-1; i<=j; i++,j--){
                int temp = matrix[i][k];
                matrix[i][k] = matrix[j][k];
                matrix[j][k] = temp;
        }
    }

    //print
    cout<<"90 deg anti-Clockwise Rotated Matrix :"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}
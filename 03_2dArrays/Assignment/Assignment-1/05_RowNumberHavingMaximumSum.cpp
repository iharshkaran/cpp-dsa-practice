// Q5: Write a program to print the row number having the maximum sum in a given matrix.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    int m;
    cout<<"Enter the columns: ";
    cin>>m;

    int matrix1[n][m];
    cout<<"Enter elements of Matrix : "<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix1[i][j];
        }
    }


    // Sum of matrix1 and matrix2
    int sum = 0;
    int maxRow = 0;
    int rowNum;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<m; j++){
            sum += matrix1[i][j];
        }
        if(maxRow<sum){
            rowNum = i+1;
            maxRow = sum;
            sum = 0;
        } else sum=0;
    }

    //print
    cout<<"Row Number of Maximum Sum of Row: "<<rowNum<<endl;
    cout<<"Sum of Maximum Row of Matrix is : "<<maxRow;
}
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// Set Matrix Zeroes (LeetCode-73)

#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row(m,0);
        vector<int> col(n,0);
        // Step 1: Find zeros and mark rows & columns
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        // Step 2: Set rows to zero
        for(int i=0; i<m; i++){
            if(row[i]==1){
                for(int j=0; j<n; j++){
                    matrix[i][j]=0;
                }
            }   
        }
        // Step 3: Set columns to zero
        for(int j=0; j<n; j++){
            if(col[j]==1){
                for(int i=0; i<m; i++){
                    matrix[i][j]=0;
                }
            }   
        }
    }

int main(){
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns : ";
    cin>>n;

    vector<vector<int>> matrix(m,vector<int>(n));
    cout<<"Enter elements of Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    setZeroes(matrix);
        
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
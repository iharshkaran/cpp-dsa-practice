//Q4: Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// leetCode-59
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows/columns : ";
    cin>>n;
    int matrix[n][n];

    //Generate Matrix Spiral Form..
    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = n-1;
    int tne = n*n;
    int count = 0;

    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc; j<=maxc && count<tne; j++){
            count++;
            matrix[minr][j] = count;
            // cout<<matrix[minr][j]<<" ";
        }
        minr++;

        //down
        for(int i=minr; i<=maxr && count<tne; i++){
            count++;
            matrix[i][maxc] = count;
            // cout<<matrix[i][maxc]<<" ";
        }
        maxc--;

        //Left
        for(int j=maxc; j>=minc && count<tne; j--){
            count++;
            matrix[maxr][j] = count;
            // cout<<matrix[maxr][j]<<" ";
        }
        maxr--;

        //Up
        //if(minr<=maxr && minc<=maxc) break;
        for(int i=maxr; i>=minr && count<tne; i--){
            count++;
            matrix[i][minc] = count;
            // cout<<matrix[i][minc]<<" ";
        }
        minc++;
    }
    //print
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//  int n ;
//  cout << "Enter the number of rows : ";
//  cin >> n;
//  int arr[n][n];

//  int k = 1, i = 0;

//  while( k <= n * n ){
//  int j = i;
//  // four steps
//  while( j < n - i ) // 1. horizontal, left to right
//  arr[i][j++] = k++;
//  j = i + 1;

//  while( j < n - i ) // 2. vertical, top to bottom
//  arr[j++][n-i-1] = k++;
//  j = n - i - 2;

//  while( j > i ) // 3. horizontal, right to left
//  arr[n-i-1][j--] = k++;
//  j = n - i - 1;

//  while( j > i ) // 4. vertical, bottom to top
//  arr[j--][i] = k++;
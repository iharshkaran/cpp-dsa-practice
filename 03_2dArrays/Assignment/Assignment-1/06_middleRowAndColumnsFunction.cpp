//Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
//elements of middle row and the elements of middle column.
//[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

#include<iostream>
#include<vector>
using namespace std;

void PrintMidRowAndCol(int n , vector<vector<int>> arr){
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the rows/columns: ";
    cin>>n;
    if(n%2==0 && n==0 && n==1){
        cout<<"something is wrong";
    }
    vector<vector<int>> matrix1(n,vector<int>(n));
    cout<<"Enter elements of Matrix : "<<endl;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix1[i][j];
        }
    }
    PrintMidRowAndCol(n, matrix1);
}
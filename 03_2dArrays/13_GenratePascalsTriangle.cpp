// LeetCode-118

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    int m = numRows;
    vector<vector<int>> v;
    // Pascal's Triangle
    for(int i=0; i<m; i++){
        vector<int> a(i+1);
        v.push_back(a);
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                v[i][j]=1;
            } else {
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v;
}
int main(){
    vector<vector<int>> v1 = generate(5);
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<=i; j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}
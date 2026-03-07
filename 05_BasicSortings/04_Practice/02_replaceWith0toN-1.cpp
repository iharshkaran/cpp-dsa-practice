#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {19,12,23,8,16};
    int n = v.size();
    vector<int> v2(n,0);
    int x = 0;

    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int idx = -1;
        for(int j=0; j<n; j++){
            if(v2[j]==1) continue;
            else if(min>v[j]){
                min = v[j];
                idx = j;
            }
        }

        v[idx] = -x;
        v2[idx] = 1;
        x++;

    }

    for(int ele : v){
        cout<<-ele<<" ";
    }
    
}
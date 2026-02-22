#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int trap(vector<int>& height) {
        int n = height.size();
        // Previous Greatest Element
        vector<int> pre(n);
        pre[0] = -1;
        int max = height[0];
        for(int i=1 ; i<=n-1; i++){
            pre[i] = max;
            if(max<height[i]) max = height[i];
        } 

        // Next Greatest Element array -> as a prev array
        vector<int> next(n);
        pre[n-1] = -1;
        max = height[n-1];
        for(int i=n-2; i>=0; i--){
            if(max<pre[i]) pre[i] = max;
            if(max<height[i]) max = height[i];
        }
        
        //Calculate Water
        int water = 0;
        for(int i=1; i<n-1; i++){
            if(pre[i]>height[i]){
                water += (pre[i]-height[i]);
            }
        }
    return water;
    }
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    cout<<trap(v);
    
}
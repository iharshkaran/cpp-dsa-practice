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

        // Next Greatest Element
        vector<int> next(n);
        next[n-1] = -1;
        max = height[n-1];
        for(int i=n-2; i>=0; i--){
            next[i] = max;
            if(max<height[i]) max = height[i];
        }

        //minimum array
        vector<int> mini(n);
        for(int i=0; i<n; i++){
            if(pre[i]<=next[i]) mini[i]=pre[i];
            else mini[i]=next[i];
        }

        //Calculate Water
        int water = 0;
        for(int i=1; i<n-1; i++){
            if(mini[i]>height[i]){
                water += (mini[i]-height[i]);
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
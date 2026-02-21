#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();

        //find Pivot
        for(int i=n-2 ; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        //if array is already greatest
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        //sorting/reverse after pivot
        reverse(nums.begin()+idx+1,nums.end());

        //finding the just greater element then idx
        int j=-1;
        for(int i=idx+1 ; i<n ; i++){
            if(nums[idx]<nums[i]){
                j = i;
                break;
            }
        }

        //swap ind idx and j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return;

    }

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    nextPermutation(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
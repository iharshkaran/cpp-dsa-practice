// Majority Element (LeetCode-169)

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
//majority element
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[(nums.size())/2];
}

int main(){
    vector<int> v = {2,2,1,1,1,2,2};

    int value = majorityElement(v);
    cout<<value<<" ";
    
}
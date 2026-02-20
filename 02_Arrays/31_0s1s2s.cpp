#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Method-1 Two pass method..
void sort012(vector<int>& nums){
    int no0 = 0;
    int no1 = 0;
    int no2 = 0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0) no0++;
        else if(nums[i]==1) no1++;
        else no2++;
    }

    for(int i=0; i<nums.size(); i++){
        if(i<no0) nums[i]=0;
        else if(no0<=i && i<(no0+no1)) nums[i]=1;
        else nums[i]=2;
    }
}

//Method-2 One pass method..
// Three pointers Algo (Dutch Flag Algo)
void sort012m2(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int hig = n-1;

    while(mid<=hig){
        if(nums[mid]==2){
            int temp = nums[hig];
            nums[hig] = nums[mid];
            nums[mid] = temp;
            hig--;  
        }
        else if(nums[mid]==0){
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;  
        }
        else mid++;
    }
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // sorting of 0s 2s and 1s
    sort012(v);

    cout<<endl;
    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
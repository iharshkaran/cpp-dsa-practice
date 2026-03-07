// Find First and Last Position of Element in Sorted Array
// LeetCode - 34

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = v.size();
    int x = 3;
    int i = 0;
    int j = n-1;
    int first = -1;
    int Last = -1;

    //first Occurrence
    while(i<=j){
        int mid = i + ((j-i)/2);
        if(v[mid]==x){
            first = mid;
            j=mid-1;
        }
        else if(v[mid]<x) i = mid+1;
        else j = mid-1;
    }

    //Last Occurrence
    i = 0;
    j = n-1;
    while(i<=j){
        int mid = i + ((j-i)/2);
        if(v[mid]==x){
            Last = mid;
            i=mid+1;
        }
        else if(v[mid]<x) i = mid+1;
        else j = mid-1;
    }
    cout<<first<<","<<Last;
}


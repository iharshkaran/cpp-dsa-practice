#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort01m2(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        // if(i>j) break; // use if only instead of else if
        else if(v[i]==1 && v[j]==0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

void sort01(vector<int>& v){
    int no0 = 0;
    int no1 = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0) no0++;
        else no1++;
    }
    //filling elements
    for(int i=0; i<v.size(); i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // sorting of 0s and 1s
    // sort(v.begin(),v.end());
    sort01m2(v);

    cout<<endl;

    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;
void NegAndPos(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>=0) j--;
        else if(v[i]>=0 && v[j]<0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        // else{
        //     int temp = v[i];
        //     v[i] = v[j];
        //     v[j] = temp;
        //     i++;
        //     j--;
        // }
    }
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(-1);
    v.push_back(30);
    v.push_back(7);
    v.push_back(-4);
    v.push_back(-9);
    v.push_back(4);
    v.push_back(1);

    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // sorting of -ve and +ve
    NegAndPos(v);
    NegAndPos(v);

    cout<<endl;

    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
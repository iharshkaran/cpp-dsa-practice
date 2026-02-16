#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>V;
    V.push_back(6);
    V.push_back(1);
    V.push_back(19);
    V.push_back(100);
    //v.at(2) = 99;
    // count<<v.at(2); //v.at(2) = v[2]
    for(int i=0 ; i<V.size() ; i++){
        cout<<V.at(i)<<" ";
    }
    cout<<endl;

// sort

sort(V.begin(),V.end());
    for(int i=0 ; i<V.size();i++){
        cout<<V.at(i)<<" ";
    }
    cout<<endl;
    return 2 , 3;

}   
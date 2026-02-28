#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("0123");
    v.push_back("0023");
    v.push_back("465");
    v.push_back("00182");
    v.push_back("940");
    v.push_back("002901");

    int max;
    string maxS = v[0];
    int x;
    for(int i=0; i<v.size(); i++){
        x = stoi(v[i]);
        if(max<x){
            max = x;
            maxS = v[i];
        }
    }
    cout<<max<<" "<<maxS<<endl;
}
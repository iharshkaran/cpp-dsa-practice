#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,char> m;
    // pair<string,char> p;
    // p.first = "Raghav";
    // p.second = 'A';
    // cout<<p.first<<" "<<p.second;

    pair<string,char> p1;
    p1.first = "Harsh";
    p1.second = 'A';
    // pair<string,char> p2;
    // p2.first = "Abhay";
    // p2.second = 'B';
    // pair<string,char> p3;
    // p3.first = "Arjun";
    // p3.second = 'C';

    m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    m["Abhay"] = 'B';
    m["Arjun"] = 'C';

    // use auto for datatypes in ForEach loop
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    m.erase("Arjun");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

}
#include<iostream>
#include<set>
#include<map>
using namespace std;
    int main(){
        // log(n)
        // set<int> s;
        // s.insert(1);
        // s.insert(8);
        // s.insert(7);
        // s.insert(4);
        // s.insert(1);
        // for(int ele : s){
        //     cout<<ele<<" ";
        // }
        
        map<string,int> m;
        m["Harhs"] = 1;
        m["Arjun"] = 3;
        m["Karan"] = 2;
        m["Abhay"] = 2;
        for(auto ele : m){
            cout<<ele.first<<" "<<ele.second<<endl;
        }
}
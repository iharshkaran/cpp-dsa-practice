#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x = 20;
    vector<int> result;
    result.push_back(1);
    
    for(int i=2; i<=x; i++){
        int carry = 0;
        for(int j=0; j<result.size();j++){
            int prod = result[j]*i + carry;
            result[j] = prod%10;
            carry = prod/10;
        }

        while(carry){
            result.push_back(carry%10);
            carry /=10;
        }
    }

    for(int i=result.size()-1; i>=0; i--){
        cout<<result[i]<<" ";
    }

}
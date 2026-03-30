#include<iostream>
using namespace std;
class Loading{
public:
    int sum(int a, int b){
        return a+b;
    }

    int sum(int a, int b, int c){
        return a+b+c;
    }

    // float sum(int a, int b, float c){ //Error
    //     return a+b+c;
    // }
};
int main(){
    Loading s;
    cout<<s.sum(5,7,6);

}
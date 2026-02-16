#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    // 0xb797dff7b0
    // 0xb797dff7b4
    // 0xb797dff7b8
    // 0xb797dff7bc
    // 0xb797dff7c0
}
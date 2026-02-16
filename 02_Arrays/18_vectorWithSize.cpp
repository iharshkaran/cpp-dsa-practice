#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    vector<int> arr(5,6); //initial size = 5 , each element having value 6
    cout<<arr[3];


}
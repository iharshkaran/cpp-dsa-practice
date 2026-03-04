#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 4 ,2, 9 ,7 ,2 ,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count;
    for(int i=0; i<n; i++){
        count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<endl;
            break;
        }
    }
}
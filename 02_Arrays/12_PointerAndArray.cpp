#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int* ptr=arr; ///giving address

    for(int i=0; i<=4 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr;// ptr is pointing to 1st element
    
    
    for(int i=0 ; i<=4; i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    *ptr = 8;
    ptr++;// ptr is pointing to 2st element
    *ptr = 9;
    ptr--;// ptr is pointing to 1st element

    for( int i=0; i<=4 ;i++){
        cout<<i[arr]<<" ";  // Array print Technique..!!
    }
    cout<<endl;

}
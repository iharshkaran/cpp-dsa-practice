#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the word :";
    cin>>str;
    
    int n = str.length();
    int count=0;

    for(int i=0; str[i]!='\0';i++){
        if(i==0 && str[i]!=str[i+1]) count++;
        else if(i==n-1 && str[i]!=str[i-1]) count++;
        else if(n==2 && str[i]!=str[i+1]){
            count = 2;
            break;
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]) count++;
    }
    cout<<count;
}
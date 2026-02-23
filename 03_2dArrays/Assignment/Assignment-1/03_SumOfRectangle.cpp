//Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2).
//Return the sum of the rectangle from (l1,r1) to (l2, r2).


#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the row : ";
    cin>>m;
    cout<<"Enter the Column : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements : "<<endl;
    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //print 
    cout<<"Your Matrix :"<<endl;
    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int x1,y1,x2,y2;
    cout<<"Enter 1st Coordinates , Range ("<<m<<","<<n<<")"<<endl;
    cout<<"x1 = ";
    cin>>x1;
    cout<<"y1 = ";
    cin>>y1;
    cout<<"Enter 2nd Coordinates (x2,y2) , Range ("<<m<<","<<n<<")"<<endl;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y2 = ";
    cin>>y2;
    
    int sum=0;
    if(x1>=0 && y1>=0 && x2>=0 && y2>=0 && x1<n && y1<n && x2<n && y2<n){
        for(int i=x1; i<=x2; i++){
            for(int j=y1; j<=y2; j++){
                sum += arr[i][j];
            }
        } 
    } else {
        cout<<"Something is wrong :(";
    }
    cout<<sum;
}
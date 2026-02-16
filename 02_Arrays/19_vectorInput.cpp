#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     vector<int> v(5);

    //     //input
    //     for(int i=0; i<5 ; i++){
    //         cin>>v[i];
    //     }

    //     //output
    //     for(int i=0; i<5 ; i++){
    //         cout<<v[i]<<" ";
    //     }

    vector<int> v;
    int n;
    cout << "size of vector : ";
    cin >> n;
    cout<<"Enter the Elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}
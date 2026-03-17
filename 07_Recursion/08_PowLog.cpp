#include<iostream>
using namespace std;

int power(int x, int n){

    if(n==0) return 1;
    if(n==1) return x;

    int half = power(x, n/2);

    if(n%2==0)
        return half * half;
    else
        return half * half * x;
}

int main(){
    cout<<power(3,6);
}





// leetCode - 50 (power(x,n))
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   // avoid overflow 
        if (N < 0) { // -ve power
            x = 1 / x;
            N = -N;
        }
        double ans = 1;
        while (N > 0) { // +ve power
            if (N % 2 == 1) {
                ans *= x;
            }
            x *= x;
            N /= 2;
        }
        return ans;
    }
};

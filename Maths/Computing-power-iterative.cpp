#include<bits/stdc++.h>
using namespace std;

// For handling values of power going par integer limits we can use long long.

// We can also handle large numbers by bring the modulo factor
int power(int x,int n /*int M*/){
    int res = 1;
    while(n>0){
        if(n%2 !=0){  // for more efficiency we can replace n%2!=0 as "n&1" -> using bitwise operator
            res = (res * x); // % M
        }
        x=(x*x); // % M;
        n=n/2;  // Here also we can use right shift operator n = n>>1 which means the same.
    }
    return res;
}

int main(){
    cout<<power(4,5);
    return 0;
}

// Time complexity = O(logn)
// Space complexity = O(1)
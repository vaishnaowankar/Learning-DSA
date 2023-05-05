#include<bits/stdc++.h>
using namespace std;

int countTrailingZeroes(int n){
    int res = 0;
    for(int i=5 ; i<=n ; i=i*5){
        res = res + n/i;
    }
    return res;
}

int main(){
    cout<<countTrailingZeroes(251);
}

// Time complexity -> O(logn)

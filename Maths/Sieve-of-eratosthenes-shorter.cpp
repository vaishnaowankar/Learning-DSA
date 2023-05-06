#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i = 2 ; i<=n  ; i++){
        if(isPrime[i]){
            // We brought the outer extra loop hereitself
            cout<<i<<" ";
            // The i*i will prevent from going above the value n
            for(int j=i*i ; j<=n ; j=j+i){
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    sieve(45);
    return 0;
}

// Time complexity = O(nloglogn)
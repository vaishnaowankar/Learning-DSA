#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2 ; i*i<=n ; i++){
        if(isPrime[i]){
            // We are starting from i*i because shorter values will already be considered in previous values.
            for(int j=i*i ; j<=n ; j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    sieve(23);
    return 0;
}
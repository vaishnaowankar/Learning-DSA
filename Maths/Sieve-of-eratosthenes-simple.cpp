// Sieve of eratosthenes is used to find the prime number less than the given number.
// We create a vector array of n+1 size and assigns all values except first two as true.
// Then we traverse the multiples starting from 2 and mark them as false
// Then lastly return the elements that has value as true which are actually prime numbers less than the given number.



#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2 ; i*i<=n ; i++){
        if(isPrime[i]){
            for(int j=2*i ; j<=n ; j=j+i){
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

// Time Complexity = O(n*sqrt(n))
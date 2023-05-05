#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n){
    if(n<=1){
        return;
    }
    for(int i=2; i*i <= n ; i++){
        while(n%i == 0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1){
        cout<<n;
    }
}

int main(){
    printPrimeFactors(12);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i=1; i*i<=n ; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){
    printDivisors(100);
    return 0;
}

// This program doesnt print the divisors in sorted order the 2nd version solves this problem.
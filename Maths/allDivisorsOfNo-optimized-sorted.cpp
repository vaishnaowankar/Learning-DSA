#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    printDivisors(100);
    return 0;
}


// Time Complexity = O(sqrt(n))
// Space Complexity = O(1)
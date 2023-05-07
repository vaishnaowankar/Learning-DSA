// Naive solution

#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n){
    int res = 0;
    while(n>0){
        if(n%2 !=0){
            res++;
        }
        n=n/2;  // it can also be written as n=n>>2; 
    }
    cout<<res;
}

int main(){
    countSetBit(5);
    return 0;
}

// Time complexity = O(Total bits in n)
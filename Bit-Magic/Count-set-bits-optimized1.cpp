// We will be using Brian Kerningam's Algorithm

// Idea is at every iteration the last set bit gets removed by ANDing with one number less than the given one.


#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int res = 0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    cout<<res;
}

int main(){
    countSetBits(40);
    return 0;
}

// Time complexity = O(set bit count)
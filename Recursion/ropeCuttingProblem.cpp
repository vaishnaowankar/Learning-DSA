// You are given a rope of length n and three values a,b,c
// Your aim is to find the maximum pieces the rope can be cut with respect to given lengths a,b,c

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int maxPieces(int n,int a ,int b,int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c));
    int res2 = max(res,maxPieces(n-c,a,b,c));

    if(res2 == -1){
        return -1;
    }
    return res2 + 1; // adding 1 because we make a cut and divide it into pieces
}

int main(){
    cout<<maxPieces(23,11,9,12);
    return 0;
}


// Time Complexity = O(3^n)
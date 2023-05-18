// The ideas is to keep track of a minimum element and subtract the subsequent elements from it and compare it with the first result.

#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
    int res = arr[1] - arr[0];
    int minValue = arr[0];
    for(int j=1 ; j<n ;j++){
        res = max(res, arr[j]-minValue);
        minValue = min(minValue,arr[j]);
    }
    return res;
}

int main(){
    int arr[]= {2,3,10,6,4,8,1};
    cout<<maxDiff(arr,7);
    return 0;
}

// Time Complexity = O(n)
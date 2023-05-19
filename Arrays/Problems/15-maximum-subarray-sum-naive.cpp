#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[] , int n){
    int res = arr[0];
    for(int i=0;i<n;i++){
        int curr = 0;
        for(int j = i ; j<n ; j++){
            curr = curr + arr[j];
            res = max(res,curr);
        }
    }
    return res;
}

int main(){
    int arr[] = {1,-2,3,-1,2};
    cout<<maxSubarraySum(arr,5);
    return 0;
}

// time complexity = O(n^2)
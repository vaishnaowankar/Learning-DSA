#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[],int n){
    int res = arr[0];
    int maxEnding  = arr[0];
    for(int i=1;i<n;i++){
        maxEnding  = max(maxEnding + arr[i] , arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}

int main(){
    int arr[] = {-3,8,-2,4,-5,6};
    cout<<maxSubarraySum(arr,6);
    return 0;
}

// Time Complexity = O(n)
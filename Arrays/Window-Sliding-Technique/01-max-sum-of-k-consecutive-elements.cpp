// We are given an array and integer k , we need to find the maximum sum that is given by k consecutive elements of array.

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n,int k){
    int curr_sum = 0;
    for(int i=0;i<k;i++){
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k ; i<n ; i++){
        curr_sum += (arr[i] - arr[i-k]);
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}

int main(){
    int arr[] = {1,8,30,-5,20,7};
    cout<<maxSum(arr,6,3);
    return 0;
}

// Time complexity = O(n)


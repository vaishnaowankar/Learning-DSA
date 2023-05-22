// We are given an array of positive integers and the int sum, we need to check if any of the subarrays adds to the given sum.

// Note this technique doesnt work if the array contains negative integers


// The idea is to keep adding the elements until it exceeds the given sum and then subtract the starting elements one by one

#include<bits/stdc++.h>
using namespace std;

bool isSubSum (int arr[],int n,int sum){
    int curr_sum = arr[0],start = 0;
    for(int end = 1; end<n ; end++){
        // clean the previous window
        while(curr_sum>sum && start<end-1){
            curr_sum -= arr[start];
            start++;
        }
        if(curr_sum == sum){
            return true;
        }
        if(end < n){
            curr_sum += arr[end];
        }
    }
    return (curr_sum == sum);
}

int main(){
    int arr[] = {1,4,20,3,10,5};
    cout<<boolalpha<<isSubSum(arr,6,33);
    return 0;
}

// Time complexity = O(n)
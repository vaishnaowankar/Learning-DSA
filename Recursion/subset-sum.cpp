// you are given an array and sum , you need to fin d how many subsets of array after addition equals to the given variable sum.

#include<bits/stdc++.h>
using namespace std;

int countSubsets(int arr[],int n,int sum){
    if(n==0){
        return (sum == 0) ? 1:0;
    }
    return countSubsets(arr,n-1,sum)+countSubsets(arr,n-1,sum-arr[n-1]);
}

int main(){
    int arr[] = {2,3,6,8,5};
    cout<<countSubsets(arr,5,8);
    return 0;
}

// Time complexity = O(2^n)
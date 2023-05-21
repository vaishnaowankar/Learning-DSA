// The idea is to find the maximum of normal subarray sum and circular subarray sum.

// we can find maximum subarray sum of normal by kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
// kadane's algorithm
int normalMaxSum(int arr[],int n){
    int res = arr[0],maxEnding = arr[0];
    for(int i=1;i<n;i++){
        maxEnding = max(arr[i],maxEnding+arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}

int overallMaxSum(int arr[],int n){
    int max_normal = normalMaxSum(arr,n);
    if(max_normal<0){
        return max_normal;
    }

    int arr_sum = 0;
    for(int i=0;i<n;i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMaxSum(arr,n);

    return max(max_normal,max_circular);
}

int main(){
    int arr[] = {5,-2,3,4};
    cout<<overallMaxSum(arr,4);
    return 0;
}

// time complexity = O(n)
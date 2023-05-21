// This solution is based on kadane's algorithm

#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[],int n){
    int res = 1;
    int curr = 1;
    for(int i=1 ; i<n ; i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
            curr++;
            res = max(res,curr);
        }else{
            curr=1;
        }
    }
    return res;
}

int main(){
    int arr[] = {5,10,20,6,3,8};
    cout<<maxEvenOdd(arr,6);
    return 0;
}

// Time complexity = O(n)
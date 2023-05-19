// The idea is to precompute the lefft max and right max before and then just follow the logic of subtracting min of lmax and rmax - arr[i]
#include<bits/stdc++.h>
using namespace std;

int storeWater(int arr[],int n){
    int res = 0;
    int lmax[n],rmax[n];

    lmax[0] = arr[0];
    for(int i=1; i<n ; i++){
        lmax[i] = max(arr[i],lmax[i-1]);
    }

    rmax[n-1] = arr[n-1];
    for(int i=n-2 ; i>=0 ; i--){
        rmax[i] = max(arr[i],rmax[i+1]);
    }

    for(int i=1 ; i<n-1 ; i++){
        res = res + (min(lmax[i],rmax[i])-arr[i]);
    }

    return res;
}

int main(){
    int arr[] = {5,0,6,2,3};
    cout<<storeWater(arr,5);
    return 0;
}

// Time complexity = O(n)
// Auxiliary Space = O(n)
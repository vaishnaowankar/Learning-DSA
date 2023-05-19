// You are given an array that consists of height of bars , you need to find how many units of water you can store in those bars.

#include<bits/stdc++.h>
using namespace std;

int storeWater(int arr[] ,int n){
    int res = 0;
    // we traverse only for middle bars because the first and last bars dont have support on sides to store water.
    for(int i=1;i<n-1;i++){
        // we find the leftmost max bar for i
        int lmax = arr[i];
        for(int j=0;j<i;j++){
            lmax = max(lmax,arr[j]);
        }
        // also the rightmost ma bar
        int rmax = arr[i];
        for(int j=i+1 ; j<n ; j++){
            rmax = max(rmax,arr[j]);
        }
        // we subtract the height of bars from the min of lmax and rmax
        res = res + (min(lmax,rmax) - arr[i]);
    }
    return res;
}

int main(){
    int arr[] = {3,0,1,2,5};
    cout<<storeWater(arr,5);
    return 0;
}

// Time Complexity = O(n^2)

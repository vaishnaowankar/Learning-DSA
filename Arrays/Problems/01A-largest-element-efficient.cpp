#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

int main(){
    int arr[] = {2,12,44,35,13};
    cout<<getLargest(arr,5);  // returns the index of the largest element
    return 0;
}

// Time complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[] , int n){
    int res = 1;
    for(int i=1; i<n ; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[] = {10,20,20,30,30,30};
    removeDuplicates(arr,6);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time complexity = O(n)
// Space complexity = O(1)
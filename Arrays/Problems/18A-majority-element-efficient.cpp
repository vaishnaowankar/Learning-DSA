#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){
    int res = 0 , count = 1;
    for(int i=1;i<n;i++){
        if(arr[res] == arr[i]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
    }

    count  = 0;
    for(int i=0;i<n;i++){
        if(arr[res] == arr[i]){
            count++;
        }
    }
    if(count <= n/2){
        res = -1;
    }
    return res;    // the res will be the index of the majority element but not necessarily the first one.
}

int main(){
    int arr[] = {6,8,4,8,8};
    cout<<majorityElement(arr,5); 
    return 0;
}

// Time complexity = O(n)
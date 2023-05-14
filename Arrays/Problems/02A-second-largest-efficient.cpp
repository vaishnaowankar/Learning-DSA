#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
    int res = -1 , largest = 0;
    for(int i=1;i<n ; i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;  
            // we just shifted the new largest as largest and old largest as new second largest in each iteration if the condition is true. 
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}

int main(){
    int arr[] = {5,20,12,20,10};
    cout<<secondLargest(arr,5);
    return 0;
}

// Time complexity = O(n) , but requires only one traversal


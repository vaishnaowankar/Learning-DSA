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

int secondLargest(int arr[] ,int n){
    int largest = getLargest(arr,n);
    int res = -1; // In this case our result can be -1 if all the elements in array are same
    for(int i=0 ; i<n;i++){
        if(arr[i] != arr[largest]){
            if(res == -1){
                res = i;  // if we find any other element lower than largest then we assign it to res.
            }
            else if(arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;
}

int main(){
    int arr[] = {2,20,12,20,10};
    cout<<secondLargest(arr,5);
    return 0;
}

// Time complexity = O(n) , but needs two traversals
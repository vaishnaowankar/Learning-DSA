#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[] , int n){
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=1; i< n ; i++){
        if(temp[res-1] != arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }

    //copy temp to arr
    for(int i=0;i<res;i++){
        arr[i] = temp[i];
    }
    return res;
}

int main(){
    int arr[] = {10,20,20,30,30,30};
    removeDuplicates(arr,6);
    for(int i=0 ; i<3 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n)
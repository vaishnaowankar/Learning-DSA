// Reverse first d elements
// Reverse next remaining elements
// Reverse the whole array

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotateByD(int arr[],int n , int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    leftRotateByD(arr,5,2);
    for(int i=0 ; i< 5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)
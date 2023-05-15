// Just use the logic of left rotate by one and call it d times
#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void leftRotateByD(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        leftRotateByOne(arr,n);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    leftRotateByD(arr,5,2);
    for(int i=0 ; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// time complexity = O(n*d)
#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int arr[] ,int n){
    int count  = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    int arr[] = {0,5,10,0,0,8,0,9};
    moveZeroesToEnd(arr,8);
    for(int i=0 ;i<8; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}

// Time complexity = O(n)
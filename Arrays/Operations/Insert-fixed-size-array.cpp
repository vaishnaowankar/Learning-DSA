// You are given a value to be inserted at pos 
// idea is to shift the elements ahead of the position of the new value to be inserted.

#include<bits/stdc++.h>
using  namespace std;

int insert(int arr[],int n,int x,int capacity,int pos){
    if(n==capacity){
        return n;
    }

    int index = pos - 1 ; // as indexing starts from 0
    for(int i = n-1 ; i>= index ; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = x;
    return (n+1);
}

int main(){
    int arr[5] = {5,7,10,20};
    cout<<insert(arr,4,3,5,2);
    return 0;
}

// Time complexity : O(n)
// Insert at the end: O(1)
// Insert at the beginning: theta(n)
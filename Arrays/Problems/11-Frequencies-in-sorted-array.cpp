// To find how many times a element occurs in a sorted array

#include<bits/stdc++.h>
using namespace std;

void printFreq(int arr[] , int n){
    int freq = 1 , i =1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1] != arr[n-2]){
        cout<<arr[n-1]<<" "<<"1"<<endl;
    }
}

int main(){
    int arr[] = {40,40,50,50,50,60};
    printFreq(arr,6);
    return 0;
}

// Time Complexity = O(n)
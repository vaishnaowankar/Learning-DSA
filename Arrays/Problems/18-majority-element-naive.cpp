// The majority element is the element that occurs more than half of the size of array.

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return i;   // returns the index of element found
        }
    }
    return -1;
}

int main(){
    int arr[] = {8,7,6,8,6,6,6,6};
    cout<<majorityElement(arr,8); 
    return 0;
}

// time complexity = O(n^2)
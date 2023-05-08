// The idea is to use the XOR operator

// Some interesting properties of the XOR operator:
//  X ^ 0 = X
//  X ^ X = 0

// The idea is to XOR each element with each other and the same elements will cancel out each other.

#include<bits/stdc++.h>
using namespace std;

int oddOccurringNumber(int arr[] , int n){
    int res = 0;
    for(int i=0; i<n ; i++){
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int arr[] = {2,4,6,4,2,2,2};
    cout<<oddOccurringNumber(arr,7);
    return 0;
}

// Time complexity = O(n)
// Space complexity = O(1)
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i = 1 ; i<n ; i++){
        if(arr[i] < arr[i-1]){  // just comparing every consecutive element with previous one , if it is smaller.
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[] = { 10,20,30};
    cout<<boolalpha<<isSorted(arr1,3)<<endl;
    int arr2[] = { 100,20,200};
    cout<<boolalpha<<isSorted(arr2,3);
    return 0; 
}

// Time complexity = O(n)

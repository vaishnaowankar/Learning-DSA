#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[i]){
                return false;
            }
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

// Time complexity = O(n^2)
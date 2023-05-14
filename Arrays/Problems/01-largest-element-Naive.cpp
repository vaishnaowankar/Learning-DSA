#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        bool flag=true;
        for(int j=0; j<n ;j++){
            if(arr[j] > arr[i]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            return i;  // returns the index of the largest element
        }
    }
    return -1;
}

int main(){
    int arr[] = {5,8,20,10};
    cout<<getLargest(arr,4);  // we will get the index of the largest element
    return 0;
}

// Time complexity = O(n^2)
// Store first d elements in temp array them move the remaining elements d positions back and add temp elements back to their respective places

#include<bits/stdc++.h>
using namespace std;

void leftRotateByD(int arr[],int n,int d){
    int temp[d];

    // moving first d elements to temp
    for(int i=0 ; i<d ; i++){
        temp[i] = arr[i];
    }

    // shifting remaining elements to d places left
    for(int i=d ; i<n;i++){
        arr[i-d] = arr[i];
    }

    // copying back temp elements to array
    for(int i=0 ; i<d;i++){
        arr[n-d+i] = temp[i];
    }
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
// Space Complexity = O(d)


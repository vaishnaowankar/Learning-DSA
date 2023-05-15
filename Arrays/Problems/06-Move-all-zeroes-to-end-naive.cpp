#include<bits/stdc++.h>
using namespace std;

// void moveZeroesToEnd(int arr[] ,int n){
//     for(int i=0 ; i<n ; i++){
//         if(arr[i] == 0  ){
//             for(int j=i+1;j<n;j++){
//                 if(arr[j] != 0){
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {0,5,10,0,0,8,0,9,0};
//     moveZeroesToEnd(arr,9);
//     for(int i=0;i<9;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Time complexity for commented code = O(n^2)

// The above code doesnt preserve the order of non zero elements because when a non-zero element is found after the i-th position, it is swapped with the i-th position. This can cause the order of non-zero elements to be changed.

// The below code solves the issue by keeping track of next non zero position.

void moveZeroesToEnd(int arr[], int n){
    int nextNonZeroPos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[nextNonZeroPos] = arr[i];
            nextNonZeroPos++;
        }
    }
    while(nextNonZeroPos < n){
        arr[nextNonZeroPos] = 0;
        nextNonZeroPos++;
    }
}

int main(){
    int arr[] = {0,5,10,0,0,8,0,9,0};
    moveZeroesToEnd(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



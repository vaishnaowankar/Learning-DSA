#include<bits/stdc++.h>
using namespace std;

// Take two pointer and swap the values
void reverse(int arr[],int n){
    int low = 0 , high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int arr[] = {30,7,6,5,10};
    cout<<"Original Array: ";
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,5);
    cout<<"Reversed Array: ";
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time Complexity = O(n)
// Auxiliary Space = O(1)


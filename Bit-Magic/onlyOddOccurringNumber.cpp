// Given an array of numbers find the number which occurs odd number of times

#include<bits/stdc++.h>
using namespace std;

void oddOccurringNumber(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        int count = 0;
        for(int j=0 ; j<n ; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count%2 != 0 ){
            cout<<arr[i];
            break;
        }
    }
}

int main(){
    int arr[] = {4,3,4,4,4,5,5};
    oddOccurringNumber(arr,7);
    return 0;
}
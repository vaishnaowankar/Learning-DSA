// The idea is to traverse from end as it will always be a leader and compare the previous ones if they are greater than it and changing the curr_leader

#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[],int n){
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";
    for(int i = n-2 ; i>=0 ; i--){
        if(curr_leader<arr[i]){
            curr_leader = arr[i];
            cout<<curr_leader<<" ";
        }
    }
}

int main(){
    int arr[] = {7,10,4,10,6,5,2};
    leaders(arr,7);
    return 0;
}

// Time complexity = O(n)
// This program will print the output from rigth to left , if you want to print from left to right then you need an extra array to store the values and then reverse which will require O(n) auxiliary space.
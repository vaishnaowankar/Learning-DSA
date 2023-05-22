// we are given a binary string and we need to find the minimum number of groups to be flipped either of 0 or 1 to make all string elements same.

#include<bits/stdc++.h>
using namespace std;

void printGroups(bool arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout<<"From "<<i<<" to ";
            }else{
                cout<<(i-1)<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<(n-1)<<endl;
    }
}

int main(){
    bool arr[] = {0,0,1,1,0,0,1,1,0,1};
    printGroups(arr,10);
    return 0;
}

// Time complexity = O(n)
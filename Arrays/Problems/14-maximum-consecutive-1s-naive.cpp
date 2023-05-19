// to find maximum consecutive 1s in binary array

#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(bool arr[] , int n){
    int res = 0;
    for(int i=0 ; i<n ; i++){
        int curr = 0;
        for(int j=i ; j<n ; j++){
            if(arr[j] == 1){
                curr++;
            }else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}

int main(){
    bool arr[] = {1,0,1,1,1,1,0,1,1};
    cout<<maxConsecutiveOnes(arr,9);
    return 0;
}

// Time complexity = O(n^2)
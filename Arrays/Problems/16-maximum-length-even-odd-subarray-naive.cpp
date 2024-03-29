// tp find the maximumm length of subarray that has alternating even odd elements

#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[],int n){
    int res = 1;
    for(int i=0 ; i<n ; i++){
        int curr = 1;
        for(int j=i+1 ; j<n ; j++){
            if((arr[j]%2==0 && arr[j-1]%2 !=0)||(arr[j]%2!=0 && arr[j-1] %2 == 0)){
                curr++;
            }else{
                break;
            }
        }
        res = max(curr,res);
    }
    return res;
}

int main(){
    int arr[] = {5,10,20,6,3,8};
    cout<<maxEvenOdd(arr,6);
    return 0;
}

// Time complexity = O(n^2)
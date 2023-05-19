// The idea is to increment res with curr and reset curr whenever found 0
#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(bool arr[],int n){
    int res = 0 ,curr;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr = 0;
        }else{
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}

int main(){
    bool arr[] = {0,1,1,0,1,1,1};
    cout<<maxConsecutiveOnes(arr,7);
    return 0;
}

// Time complexity = O(n)
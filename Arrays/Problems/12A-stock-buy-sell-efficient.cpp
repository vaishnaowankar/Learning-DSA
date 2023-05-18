// we need to keep track of low points and peak points and subtract according and increment the profit

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[] , int n){
    int profit =0 ;
    for(int i=1 ; i<n ; i++){
        if(price[i] > price[i-1]){
            profit += (price[i] - price[i-1]);
        }
    }
    return profit;
}

int main(){
    int arr[] = {1,5,3,8,12};
    cout<<maxProfit(arr,5);
    return 0;
}

// Time complexity = O(n)
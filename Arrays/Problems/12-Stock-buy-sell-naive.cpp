// The array consists of the prices of stocks on consecutive days,  we need to find the maximum profit we can make by buying and selling stock on particular days

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[] ,int start, int end){
    if(end<=start){
        return 0;
    }
    int profit = 0;
    for(int i=start ; i<end ; i++){
        for(int j=i+1;j<=end;j++){
            if(price[j] > price[i]){
                int curr_profit = price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);
                profit= max(profit,curr_profit);
            }
        }
    }
    return profit;
}

int main(){
    int arr[] = {1,5,3,8,12};
    cout<<maxProfit(arr,0,4);
    return 0;
}

// Time complexity = O(n^2)
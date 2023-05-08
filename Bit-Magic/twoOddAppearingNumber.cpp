// Note the naive solution for this is same as oneOddOccurring Number.

// Here we are discussing the efficient solution itself.
#include<bits/stdc++.h>
using namespace std;

void twoOddAppearing(int arr[], int n){
    int XOR = 0,res1=0, res2=0;
    for(int i=0;i<n;i++){
        XOR =XOR ^ arr[i];
    }
    // After this step we will be remained with two odd numbers XORED with each other i.e 
    // res1 ^ res2 , we need to seperately print them
    int rsb = XOR & (~(XOR-1)); // logic for rightmost set bit
    for(int i=0 ; i<n ; i++){
        if((arr[i] & rsb) !=0){  // Here the numbers with the rightmost bit set will be grouped together with one number from res in it and the other will move to other group and XORing will give both as res1 and res2.
            res1 = res1 ^ arr[i];
        }else{
            res2 = res2 ^ arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}

int main(){
    int arr[] = {3,4,3,4,8,4,4,32,7,7};
    twoOddAppearing(arr,10);
    return 0;
}
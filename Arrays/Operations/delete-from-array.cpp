#include<bits/stdc++.h>
using namespace std;

int deleteEle(int arr[] ,int n , int x){
    int i;
    for(int i=0; i<n ; i++){
        if(arr[i] == x){
            break;
        }
        if(i==n){
            return n; // returning the size of an array
        }
        for(int j=i ; j<n-1 ; j++){
            arr[j] = arr[j+1]; 
        }
        return (n-1);
    }
}

int main(){
    int arr[6] = {1,2,5,7,9,12};
    cout<<deleteEle(arr,6,5);
    return 0;
}


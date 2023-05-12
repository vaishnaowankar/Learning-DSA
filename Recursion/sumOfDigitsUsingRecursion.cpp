#include<bits/stdc++.h>
using namespace std;

int getSum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return getSum(n/10) + n%10;
    }
}

int main(){
    cout<<getSum(253);
    return 0;
}

// Time complexity = O(no of digits)
// Space complexity = O(no of digits)
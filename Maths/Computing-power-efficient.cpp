// Idea
/*
power(x,n) = power(x,n/2) * power(x,n/2) , if n is even

power(x,n) = power(x,n-1) * x , if n is odd

*/

#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==0){
        return 1;
    }
    int temp = power(x,n/2);
    temp = temp * temp;
    if(n%2==0){
        return temp;
    }else{
        return temp * x;
    }
}

int main(){
    cout<<power(3,5);
    return 0;
}

// Time complexity = O(logn)
// Space complexity = O(logn)
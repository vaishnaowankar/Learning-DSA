// If any number is power of 2 it has only one set bit in its binary representation

// we can unset the rightmost bits of a number by ANDing it with one number less than it.

#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n){
    if(n==0){
        return false;
    }
    return ((n&(n-1))==0);
}

int main(){
    cout<<boolalpha<<isPow2(13);
    return 0;
}
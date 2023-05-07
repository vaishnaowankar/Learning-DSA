// We will be using Lookup Table Method for 32 bit numbers , which divides the binary representation of numbers in chunks of 8bits and removes each chunk at each representation

#include<bits/stdc++.h>
using namespace std;

// First we need to create a table that stores the values of set bit for each number i.e 0 for 0 , 1 for 1 , 1 for 2 , 2 for 3 and so..on
int table[256];
void initialize(){
    table[0]=0;
    for(int i=1;i<256;i++){
        table[i] = (i&1) + table[i/2];
    }
}

int countSetBits(int n){
    int res = table[n & 0xff];  //0xff is the hexadecimal representation of 8 set bits
    n=n>>8;
    res = res + table[n & 0xff];
    n=n>>8;
    res = res + table[n & 0xff];
    n=n>>8;
    res = res + table[n & 0xff];
    // n=n>>8;
    // res = res + table[n & 0xff];
    // n=n>>8;
    // res = res + table[n & 0xff];
    // n=n>>8;
    // res = res + table[n & 0xff];
    // n=n>>8;
    // res = res + table[n & 0xff];
    

    return res;
}
// Note for 64 bit numbers we need to calculate  res four more times.

int main(){
    initialize();
    cout<<countSetBits(15);
    return 0;
}

// Time complexity = O(1)

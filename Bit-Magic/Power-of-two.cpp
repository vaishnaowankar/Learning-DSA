// Check whether a given number is power of two

// Idea is to repeatedly divide the number by 2 till it becomes 1.

#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2 != 0 ){
            return false;
        }
        n=n/2;
    }
    return true;
}

int main(){
    cout<<boolalpha<<isPow2(13);
    return 0;
}
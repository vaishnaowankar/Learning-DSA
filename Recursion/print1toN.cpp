#include<bits/stdc++.h>
using namespace std;

void print1toN(int n){
    if(n==0){
        return;
    }
    print1toN(n-1);
    cout<<n<<" ";
}

int main(){
    int n = 4;
    print1toN(n);
    return 0;
}

// Time complexity = O(n)
// Space complexity = O(n)
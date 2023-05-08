#include<bits/stdc++.h>
using namespace std;

void printPowerSet(string str){
    int n = str.length();
    int powSize = pow(2,n);
    for(int counter =0 ; counter<powSize; counter++){
        for(int j=0;j<n;j++){
            if(counter & (1<<j)){
                cout<<str[j];
            }   
        }
        cout<<"\n";
    }
}

int main(){
    printPowerSet("ab");
    return 0;
}

// Time complexity = O(2^n * n)
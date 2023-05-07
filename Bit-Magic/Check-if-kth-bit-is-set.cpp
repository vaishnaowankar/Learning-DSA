

#include<bits/stdc++.h>
using namespace std;

// Method 1 -> using left shift operator
// void checkKthBit(int n , int k){
//     if(n&(1<<(k-1))!=0){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
// }

// Method 2 -> using right shift operator
void checkKthBit(int n , int k){
    if(((n>>(k-1))&1)==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

int main(){
    checkKthBit(5,3);
    return 0;
}
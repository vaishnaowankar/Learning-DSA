#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b ){
    int res = min(a,b);  // know that GCD cannot be more than the lowest of two
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;

}

int main(){
    cout<<gcd(10,15);
    return 0;
}
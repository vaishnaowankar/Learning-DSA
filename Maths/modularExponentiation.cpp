//problem link - https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146



#include <bits/stdc++.h> 
using namespace std;

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res = 1;
    
    while(n>0){
        //odd case
        if(n&1){
            res = (1LL * res * (x)%m)%m;  //if the power is odd we need to multiply the base one more time to result, the modulas is used according to question. 1LL is used to store the ans in range , int will overflow according to given constraints.
        }
        x = (1LL * (x)%m*(x)%m)%m;        //multiplying occurence of base
        n = n>>1;                         //basically we are dividing the power by 2 , bitwise operations are efficient to use.
    }
    return res;
}
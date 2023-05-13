// you are given n person in circle and you need to kill every kth person at each recursion and return the last person i.e who survives.

// After each recursion the pistol is handed to next person and it counts itself as 1.

// Persons starts from index 0

#include<bits/stdc++.h>
using namespace std;

int jos(int n,int k){
    if(n==1){
        return 0;
    }else{
        return (jos(n-1,k)+k)%n;
        // Reason for adding k is that in each recursion the numbers will be order again and we need to map this with the remaining order .
        // Modulo n is used because the ordering can exceed n 
    }
}

// what if the ordering starts from 1 instead of 0?
// Just add 1 to the above result

// int myJos(int n,int k){
//     return jos(n,k) + 1;
// }

int main(){
    cout<<jos(7,3);
    return 0;
}

// Time Complexity = O(n)
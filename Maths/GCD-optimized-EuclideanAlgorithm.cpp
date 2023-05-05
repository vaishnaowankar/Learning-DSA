/* 
Euclidean Algorithm 

Let 'b' be a smaller than 'a' 
gcd(a,b) = gcd(a-b,b)

*/




#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    cout<<gcd(10,15);
    return 0;
}

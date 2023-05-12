#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char A,char B,char C){
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    TOH(n-1,A,C,B);
    // Move from A to B using C as auxiliary(temporary empty space)
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
}

int main(){
    TOH(3,'A','B','C');
    return 0;
}

// No of movements we need to make for a given n = 2^n - 1
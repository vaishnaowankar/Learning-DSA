#include<bits/stdc++.h>
using namespace std;

// Initially start = 0 , end= n-1 
bool isPalindrome(string &str,int start,int end){
    if(start >= end){
        return true;
    }

    return (str[start] == str[end]) && isPalindrome(str,start+1,end-1);
}

int main(){
    string pal = "abcbba";
    cout<<boolalpha<<isPalindrome(pal,0,6);
    return 0;
}

// Time complexity = O(n)
// Space complexity = O(n)
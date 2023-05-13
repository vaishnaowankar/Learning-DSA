// we need to print all permutations of a given string

#include<bits/stdc++.h>
using namespace std;

void permute(string &s , int index = 0){
    // index keeps track of which place to add value and how many places are filled
    if(index==s.length()-1){
        cout<<s<<" ";
        return;
    }
    for(int j=index ; j<s.length();j++){
        swap(s[index],s[j]);
        permute(s,index+1);
        swap(s[index],s[j]);
    }
}

int main(){
    string s = "ABC";
    permute(s);
    return 0;
}
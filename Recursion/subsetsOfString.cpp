#include<bits/stdc++.h>
using namespace std;

void subsets(string &s,string curr="",int index=0){
    if(index==s.length()){
        cout<<curr<<" ";
        return;
    }
    subsets(s,curr,index+1); // not include new character
    subsets(s,curr+s[index],index+1); // include new character
}

int main(){
    string str = "ABC"; 
    subsets(str);
    return 0;
}
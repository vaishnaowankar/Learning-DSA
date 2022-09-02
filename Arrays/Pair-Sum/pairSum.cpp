#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    //lets create a vector to return the ans
    vector<vector<int>> ans;
    
   //we will run two loop , one from i to n-1 and other from i+1 to n-1 and calculate sum of both pairs at each iteration
    for(int i=0 ; i<arr.size(); i++){
        for(int j=i+1 ; j<arr.size() ; j++){
            if(arr[i] + arr[j] == s){
                //problem wants to store pairs in sorted order (ascending)
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));               
                ans.push_back(temp);
            }
        }
    }
    //problem asks us to return the pairs in sorted order as well so
    sort(ans.begin(),ans.end());
    return ans;
}
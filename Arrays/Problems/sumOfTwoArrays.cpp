//Problem link = https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186
//explanation = https://www.youtube.com/watch?v=Z7_nMTHROZo&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=22&t=7s
// Follow the comment section of above explanation video with different strategies.





#include <bits/stdc++.h> 
using namespace std;

//function to reverse an array
vector<int> reverse(vector<int> ans){
    int s = 0;
    int e = ans.size() - 1;
    
    while(s<e){
        swap(ans[s] , ans[e]);
        s++;
        e--;
    }
    
    return ans;
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i = n-1;   //start from last element of array 1
    int j = m-1;   //start from last element of array 2
    vector<int> ans; 
    int carry = 0;
    
    //loop till min size array
    while(i>=0 && j>=0){
        //start with adding last element of both arrays as we normally add two numbers
        int val1 = a[i];
        int val2 = b[j];
        
        int sum = val1 + val2 + carry;
        
        carry = sum/10; //carry is one that remains if sum exceeds 9
        sum = sum%10;   //part other than carry
        ans.push_back(sum); //the vector gets filled in with the sum digits
        i--;
        j--;
    }
    
    //Case 1: if first array has more elements than second
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
    //Case 2: if second array has more elements than first
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
    //Case 3: if both arrays has same elements and carry remains
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //Note the vector gets filled according to the last digit of our ans as first and so on...so we need to reverse the ans.
    return reverse(ans);
}
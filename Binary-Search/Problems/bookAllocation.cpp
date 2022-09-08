//Important application of binary Search asked in top companies
// Remember whenever you can figure out that a sorted part can be negleted with a certain value (actually mid) we can think of applying binary search

//Link - https://www.codingninjas.com/codestudio/problems/allocate-books_1090540
//Explanation - https://www.youtube.com/watch?v=YTTdLgyqOLY&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=15&t=3s




//Function for the process of assigning and checking the books to students while following all the conditions

#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount = 1;  //to check if students dont exceed the given value
    int pageSum = 0; // to keep track of pageSum while comparing with mid value
    
    for(int i=0 ; i<n ; i++){
        //Compare if value of pageSum at each iteration is less than or equal to mid 
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        
        //if not
        else{
            //check for next student
            studentCount++;
            //see if the change is under given conditions
            if(studentCount > m || arr[i] > mid){
                return false;
            } 
            //assign the present value of index to pageSum
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
   //Always note the search space in binary search problems
    //Note the given array can be in sorted or unsorted manner
    //Here our search space will the numbers between 0 and sum of elements, so we can apply binary search to this condition.
    int start = 0;
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum+=arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end){
        //check if the process(i.e isPossible function) satisfies all the conditions means here mid can be our possible solution , so store it in ans
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        
        //else if the current mid doesnt satisfy the condition neither will its previous numbers satisfy so bring start to mid + 1
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
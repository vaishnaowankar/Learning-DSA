//Important Application of Binary Search

/* 

***
Note this problem also has application in finding total number of occurences of an element in an array.
The only addition will be the formula:
Total Occurences = Last Occurence - First Occurence + 1
***

*/


#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr,int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    //store ans as -1 so if element is not present then return -1
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
           ans = mid;
           end = mid - 1;
           //if element i present at mid then we store the mid and check if there is any other occurence before it
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1; 
        }
        
        mid = start + (end -start)/2;
    }
    return ans;
}

int lastOcc(vector<int> arr,int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
           ans = mid;
           start = mid + 1;
           //similarly here we check if element has any other occurence after it
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1; 
        }
        
        mid = start + (end -start)/2;
    }
    return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first = firstOcc(arr,n,k);;
    p.second = lastOcc(arr,n,k);
    
    return p;
}
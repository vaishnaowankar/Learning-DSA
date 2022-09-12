//Code for selection sort
//problem link - https://www.codingninjas.com/codestudio/problems/selection-sort_981162

/*

In this algortihm we tend to bring the minimum of the numbers in array to front one by one in subsequent rounds that go for n-1 times.

*/



#include<bits/stdc++.h>
using namespace std;



void selectionSort(vector<int>& arr, int n)
{   
    
    //This is the loop for keep on comparing one element with all other elements
    for(int i = 0 ; i<n-1 ; i++) {
        
        int minIndex = i; //assume the minimum as the index of i
        
        //compare others in front with the minIndex
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j; //if its less update the minIndex to the minimum value index number for swapping later.
            }
        }
        //swap the numbers
        swap(arr[i] , arr[minIndex]);
        
    }
}
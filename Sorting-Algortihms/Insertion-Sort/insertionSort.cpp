//Insertion sort
//problem link - https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179

//In this algo we go on comparing each consequetive element with its previous one and place according to the sorted order .
// It takes n-1 rounds to sort the array in worst case.

/*

Time complexity :
Best Case : O(n) 
Worst Case : O(n^2)

Space complexity : O(1)

*/

/* 
Use Cases :
1. Insertion sort is used when number of elements is small.
2. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.
*/



#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    //loop for rounds
    for(int i = 1 ; i<n ; i++){
        int temp = arr[i];
        
        //loop for actual logic of shifting or ignoring and inserting
        int j = i-1;
        for(; j>=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        //the values in array is shifted and have made a path for the temp value to be placed at its right place.
        arr[j+1] = temp;
    }
}
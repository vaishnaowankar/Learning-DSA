//bubble sort code
//problem link - https://www.codingninjas.com/codestudio/problems/bubble-sort_980524

//In this algo we compare consequetive elements and swap accorting to sorted order required in round that happens n-1 times.

// In each round the ith largest element gets placed at its right position , Ex in 1st round the 1st largest element gets placed at the end.

#include<bits/stdc++.h>
using namespace std;




void bubbleSort(vector<int>& arr, int n)
{   
     //process for each round
    for(int i = 1 ; i < n ; i++){
       
        
        //processing or comparing consequetive elements
        
        for(int j = 0 ; j<n-i ; j++){  //note we are traversing till n-i index in each iteration because in each round the largest elements gets placed at right positions in the end so , we need not compare then.
            
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

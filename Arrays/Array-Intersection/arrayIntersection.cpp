#include<bits/stdc++.h>
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	//initialise the two variables i,j acting as pointers(assume) to arr1 and arr2 resp.
    int i=0 , j = 0;
    
    //create a vector to store ans and return
    vector<int> ans;
    
    //looping till the length of arrays simultaneously
    while(i<n && j<m){
        //check if value is same in both arrays
        if(arr1[i] == arr2[j]){
            //if yes , push it to our vector as this is the output we need
            ans.push_back(arr1[i]);
            //move forward
            i++;
            j++;
        }
        //if the element in first array is small than in second then no need of further comparison because ultimately all other elements will be larger as array is sorted in non-decreasing order.
        else if(arr1[i] < arr2[j]){
            //move i forward
            i++;
        }
        else{
            //move j forward
            j++;
        }
    }
    return ans;
}

//driver code follows.
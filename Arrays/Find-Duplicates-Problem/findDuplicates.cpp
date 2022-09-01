#include <bits/stdc++.h> 
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	//first sort the given vector
    //sorting is necessary to combine duplicate values together , so while comparing we meet the necessary matching condition.
    sort(arr.begin(),arr.end());
    //store the first value to start the comparison
    int temp = arr[0];
    //start from the second index
    for(int i = 1 ; i<n ; i++ ){
        //compare if both values are same i.e duplicates
        if(arr[i] == temp){
            //if same then return
            return arr[i];
        }
        //if false them update temp with second element
        temp = arr[i];
    }
    return 0;
    
}

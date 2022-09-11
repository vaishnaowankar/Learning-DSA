//problem link - https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
//concept - https://www.youtube.com/watch?v=YTTdLgyqOLY&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=15

//binary search application


#include<bits/stdc++.h>
using namespace std;


bool isPossible(vector<int> &stalls, int k,int mid){
    int cowCount = 1;
    int lastPos = stalls[0]; //we create a first cow and place it at our first index of sorted vector 
    
    for(int i=0 ; i<stalls.size(); i++){
        if(stalls[i] - lastPos >= mid){  //we place the second cow at next index and check if their distance can be possible solution or not. Remember we enter this condition only if satisfied.
            cowCount++;  // we create another cow to place at next position
            if(cowCount == k){ //we check if all the cows have been assigned the position with given condiitons satisfied
                return true;
            }
            lastPos = stalls[i]; // if not we assign the latest position as lastPos this helps us in comparing the consecutive cows like 1 and 2 , then 2 and 3 and so on.
        }
    }
    return false; //if no condition satisfies the output is false and we move to else part in the application.
}


int aggressiveCows(vector<int> &stalls, int k)
{
   
    sort(stalls.begin(),stalls.end()); //sorting is necessary to assign the lowest value for comparison to lastPos in isPossible function above.
    int start = 0;
    int maxim = -1;
    for(int i=0 ; i<stalls.size() ; i++){
        maxim = max(maxim , stalls[i]);
    }
    int end = maxim;
    int ans = -1;
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(isPossible(stalls,k,mid)){   //possible solution is stored and moved ahead because suppose if cows dont fight at max distance of 4 they wont even fight at at distance of 5 , so we tend to move towards largest value as asked in question as well 
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
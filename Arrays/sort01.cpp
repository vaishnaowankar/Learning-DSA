//Sorting 0 and 1 using Two Pointer approach

#include<bits/stdc++.h>
using namespace std;

//function to print an array
void printArray(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//function to sort an array for 0 and 1 s
void sortZeroOne(int arr[] , int size){
    // initialise left pointer to index 0 and right one to last index
    int left=0 , right=size-1;

    //loop till left < right
    while(left<right){

        //if the value at left pointer is 0 , dont do anything just move ahead
        while(arr[left] == 0){
            left++;
        }

        ////if the value at right pointer is 1 , dont do anything just move backward
        while(arr[right] == 1){
            right--;
        }

        //else if(left value is not zero and right value is not 1 as well as left < right , then swap left and right)
        if(left<right){
            swap(arr[left] , arr[right]);
            left++;
            right--;

        }
    }
}



int main(){
    int arr[] = {0,1,0,0,1,0,1,1};

    sortZeroOne(arr,8);
    printArray(arr,8);

    return 0;
}
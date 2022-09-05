// The pivot is actually the smallest or largest value in an array , mostly the smallest value is considered.
// The array present is a sorted - rotated array which means the array consists of two parts with monotonous(increasing) order.
// Ex: 7 , 10 , 17, 1 , 2 , 3
// It has application in other problems of binary search as well

#include<iostream>
using namespace std;

//Our motive is to find the lowest value as pivot
int getPivot(int arr[] , int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){

        //This statements states that the mid lies in the first monotonous part of the array where all values will be either equal or greater than arr[0]

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }

        //This depicts the other part
        else{
            end = mid;
        }

        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int arr[7] = {5,7,10,17,1,2,3};
    cout<<"The pivot element is: "<<getPivot(arr,7);
}
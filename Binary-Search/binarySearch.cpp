//Remember the array needs to be in sorted order for applying binary search

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){

    int start = 0;
    int end = size - 1;

    //this is the way to write for optimaztion for large integer values that might exceed the range of int
    int mid = start + (end-start)/2;

    while(start <= end){
        
        if(arr[mid] == key){
            return mid;
        }
        //shift to right part of mid
        else if(key > arr[mid]){
            start = mid + 1;
        }
        //shift to left part of mid
        else{
            end = mid - 1;
        }

        //update mid
        mid = start + (end-start)/2;
    }   
    return -1;
}

int main(){
    int arr1[] = {1,3,4,7,8,10};
    int arr2[] = {2,4,7,9,12};

    cout<<binarySearch(arr1,6,7)<<endl;
    cout<<binarySearch(arr2,5,9)<<endl;
    cout<<binarySearch(arr1,6,12)<<endl;

    return 0; 
}
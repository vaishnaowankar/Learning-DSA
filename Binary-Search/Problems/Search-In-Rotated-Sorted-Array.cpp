/*

Sample Input 1:
4               -> no of elements in array
2 5 -3 0        -> elements
2               -> queries to search element
5               -> first query to search
1               -> second query to search
Sample Output 1:
1
-1
Explanation For Sample Input 1:
In the 1st test case, 5 is found at index 1

In the 2nd test case, 1 is not found in the array, hence return -1.

*/




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

int binarySearch(int arr[],int s,int e, int key){

    int start = s;
    int end = e;

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

int search(int* arr, int n, int key) {
    // Write your code here.
    int pivot = getPivot(arr,n);
    //binary search on second line
    if(key >= arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }
    //binary search on first line
    else{
        return binarySearch(arr,0,pivot-1,key);
    }
}
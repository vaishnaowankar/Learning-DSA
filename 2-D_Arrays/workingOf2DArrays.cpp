#include<iostream>
using namespace std;

//note while passing 2-D array as parameter we need to give the column size
bool isPresent(int arr[][4] , int key , int row, int col){
    for(int row = 0 ; row<3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            if(arr[row][col] == key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    //creating a 2D array
    int arr[3][4];

    //initializing the array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //initializing row wise
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    cout<<"Enter inputs equal to row X col: ";

    //taking input row wise
    for(int row = 0 ; row<3 ; row++){
        for(int col = 0 ; col<4 ; col++){
            cin>>arr[row][col];
        }
    }

    /* taking input column wise

    for(int col = 0 ; col<4 ; col++){
        for(int row = 0 ; row<3 ; row++){
            cin>>arr[row][col];
        }
    }

    */

    //printing the array
    for(int row = 0 ; row<3 ; row++){
        for(int col = 0 ; col<4 ; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    //searching an element in an array
    int searchEle;
    cin>>searchEle;
    if(isPresent(arr,searchEle,3,4)){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }

    return 0;
}
